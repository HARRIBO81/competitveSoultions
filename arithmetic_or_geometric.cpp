//
// Created by ryan javid on 2021-09-18.
//

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t, a1, a2, a3, k;
ll MOD = 1000000007;

ll pow(ll x, ll n, ll mod) {
    if(n == 0) {
        return 1;
    }
    ll t = pow(x,n/2,mod);
    t = t*t % mod;
    if(n%2==0) return t;
    return t*x % mod;
}

int main() {
    cin >> t;
    for(ll I = 0; I < t; I++) {
        cin >> a1 >> a2 >> a3 >> k;
        if(a2-a1 == a3-a2) {
            cout << (a1 + (a3-a2)*(k-1) % MOD) % MOD << endl;
        }
        else {
            cout << a1 * pow(a3/a2, k-1, MOD) % MOD << endl;
        }
    }
}