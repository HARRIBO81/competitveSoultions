//
// Created by ryan javid on 2021-09-19.
//

#include <bits/stdc++.h>
using namespace std;
int t, n, k, val;
int main() {
    cin >> t;
    for(int I = 0; I < t; I++) {
        cin >> n >> k;
        int cur = k;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> val;
            if(val - cur >= 0) {
                cnt++;
                cur = k;
            } else {
                cur -= val;
            }
        }
        cout << cnt << endl;
    }
}