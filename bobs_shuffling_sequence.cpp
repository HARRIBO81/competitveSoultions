//
// Created by ryan javid on 2021-11-07.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main() {
    cin >> n;
    ll array[n];
    for(ll i = 0; i < n; i++) {
        cin >> array[i];
    }
    ll biggest = 0;
    do {
        ll cnt = 0;
        ll prev = 0;
        bool first = true;


        if(cnt > biggest) {
            for(auto i : array) {
                cout << i << " ";
            }
            cout << cnt;
            cout << endl;
        }
    } while(next_permutation(array, array+n));

    cout << biggest;


}
