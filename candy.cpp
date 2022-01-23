//
// Created by ryan javid on 2021-11-07.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<ll> factors;
int main() {
    cin >> n;
    ll i = 1;
    while(i*i <= n) {
        if(n%i==0) {
            factors.push_back(i);
            if(n/i != i) {
                factors.push_back(n/i);
            }
        }
        i++;
    }
    sort(factors.begin(),factors.end());
    for(auto x : factors) {
        cout << x << endl;
    }
}