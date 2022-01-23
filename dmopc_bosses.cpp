//
// Created by ryan javid on 2021-10-23.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, h, p;
ll a[1000000];
int main() {
    ll sum = 0;
    cin >> n >> h >> p;
    for(int i = 0; i < n; i++) {
        cin >> a[i]; sum+=a[i];
    }
    sort(a,a+n);
    ll ans = sum * p;
    for(int i = 0; i < n; i++) {
        ans = min(ans, a[i]*h + (sum - (n-i)*a[i]) * p);
        sum -= a[i];
    }
    cout << ans << endl;
}