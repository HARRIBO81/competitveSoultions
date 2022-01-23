//
// Created by ryan javid on 2021-08-21.
//

#include <bits/stdc++.h>
using namespace std;
long long n, q, k;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long counter = 0;
    cin >> n >> q;
    long long array[100000], psa[100001];
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for(int i = 0; i < n; i++) {
        if(array[i] >= 0) {
            counter++;
        }
    }
    sort(array, array+n, greater<long>());
    psa[0] = array[0];
    for(int i = 0; i < n; i++) {
        psa[i+1] = psa[i] + array[i];
    }
    for(int i = 0; i < q; i++) {
        cin >> k;
        if(k <= counter) {
            cout << psa[k] - psa[0] << endl;
        } else {
            cout << psa[counter] - psa[0] << endl;
        }
    }

}