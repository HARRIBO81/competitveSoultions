//
// Created by ryan javid on 2022-01-16.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e5=5;
int n, m, x[MM], y[MM]; set<pair<int, int>> s;
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    for(int i = 1, k, d; i <= m; i++) {
        cin >> k >> d;
        int g = __gcd(k, d);
        k/=g; d/=g;
        if(d < 0) {
            k*=-1;
            d *=-1;
        }
        s.insert({k,d});
    }
    for(auto i : s) {
        ll k = i.first, d = i.second;
        unordered_map<ll, int> mp;
        for(int j = 1; j <= n; j++) {
            mp[y[j]*d - x[j]*k]++
        }
        for(auto j : mp) {
            ans+=1LL*j.second*(j.second-1)/2;
        }
    }
}