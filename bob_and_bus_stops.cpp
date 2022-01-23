//
// Created by ryan javid on 2021-07-17.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1e5;
const int n, q, a[MM]; int l; int r;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; cin >> q;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+sizeof(a) / sizeof(a[0]));
    for(int i = 0; i < q; i++) {
        cin >> l; cin >> r;
        auto lower = lower_bound(a,a+n,l) - a;
        auto higher = upper_bound(a,a+n,r) - a;
        cout << higher-lower << endl;
    }
    return 0;
}
