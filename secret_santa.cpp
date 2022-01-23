//
// Created by ryan javid on 2021-10-05.
//

#include <bits/stdc++.h>
using namespace std;
int n, z[7], w[7], ans = 1e9, tot, a[7];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> z[i] >> w[i];
        a[i] = i; tot += w[i];
    }
    do {
        int stress = 0;
        int cur = 101;
        int cost = tot;
        for(int i = 0; i < n; i++) {
            int k = a[i];
            stress += (abs(cur-z[k])+1) * cost;
            cur = z[k]; cost -= w[k];
        }
        ans = min(ans,stress);
    } while(next_permutation(a, a+n));
    cout << ans;
}
