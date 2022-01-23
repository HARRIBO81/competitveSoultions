//
// Created by ryan javid on 2021-10-03.
//

#include <bits/stdc++.h>
using namespace std;
int n, k, r, c;
int main() {
    int row[1000000], col[1000000], right[1000000], left[1000000];
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> r >> c;
        r = r-1;
        c = c-1;
        row[r]++;
        col[c]++;
        left[r+c]++;
        right[r+(n-1)-c]++;
        if(row[r] == k || col[c] == k || left[r+c] == k || right[r+(n-1)-c] == k) {
            cout << i+1;
            return 0;
        }
    }
    cout << "-1";
}