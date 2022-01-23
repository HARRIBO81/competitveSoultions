//
// Created by ryan javid on 2021-08-02.
//
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll n, r, s, a, b;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int I = 0; I < n; I++) {
        cin >> a >> b;
        b /= __gcd(a, b);
        while (b % 2 == 0) {
            b/=2;
            r++;
        }
        while(b%5==0) {
            s++;
            b/=5;
        }
        if(b!=1) {
            cout << "-1" << endl;
        }
        else {
            cout << max(r,s) << endl;
        }
        r = 0;
        s = 0;
    }
}