//
// Created by ryan javid on 2021-08-21.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, x, q, l, r;
    int array[100000], psa[100001];
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        cin >> x;
        array[x]+=1;
    }
    psa[0] = array[0];
    for(int i = 1; i < n; i++) {
        psa[i] = array[i] + psa[i-1];
    }
    for(int i = 0; i < n; i++) {
        cout << psa[i] << " ";
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << psa[r-1] - psa[l] << endl;
    }
}