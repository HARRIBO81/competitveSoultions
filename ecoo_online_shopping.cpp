//
// Created by ryan javid on 2021-10-05.
//

#include <bits/stdc++.h>
using namespace std;
string s;
int t, n, m, p, q, k, d;
int main() {
    cin >> t;
    for(int I = 0; I < t; I++) {
        map<string, vector<pair<int, int>>> options;
        cin >> n;
        for(int J = 0; J < n; J++) {
            cin >> m;
            for(int K = 0; K < m; K++) {
                cin >> s >> p >> q;
                options[s].push_back({p, q});
            }
        }
        for(auto i : options) {
            sort(i.second.begin(), i.second.end());
        }
        int cnt = 0;
        cin >> k;
        for(int L = 0; L < k; L++) {
            cin >> s >> d;
            for(auto i : options[s]) {
                int small = min(i.second, d);
                d -= small;
                cnt += small*i.first;
            }
        }
        cout << cnt << "\n";
    }
}