//
// Created by ryan javid on 2021-12-12.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MM = 1e6+5;
ll n, q, m, p[MM], resource[MM], size[MM];
ll find_set(int d) {
    return d==p[d]? p[d] : p[d] = find_set(p[d]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(ll i = 1; i <= n; i++) {
        p[i] = i; size[i] = 1; cin >> resource[i];
    }

    for(ll i = 1, x, y; i <= q; i++) {
        cin >> m;
        if(m == 1) {
            cin >> x >> y;
            ll fx = find_set(x), fy = find_set(y);
            if(fx!=fy) {
                p[fx] = fy; size[fy]+=size[fx];resource[fy]+=resource[fx];
            }
        }
        if(m == 2) {
            cin >> x;
            cout << size[find_set(x)] << endl;
        }
        if(m == 3) {
            cin >> x;
            cout << resource[find_set(x)] << endl;
        }
    }

}