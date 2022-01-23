//
// Created by ryan javid on 2021-12-22.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1005;
vector<int> comp[MM];
int p[MM], r[MM], n, x;
int find_set(int d) {
    return d==p[d]? p[d] : p[d] = find_set(p[d]);
}
void u(int u, int v) {
    u = find_set(u);
    v = find_set(v);
    if(r[u] < r[v]) {
        p[u] = v;
    }
    else if(r[v] < r[u]) {
        p[v] = u;
    }
    else {
        p[v] = u;
        r[u]++;
    }
}
int main() {
    cin >> n;
    for(int i = 1; i < n; i++) p[i] = i;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> x;
            if(x == 1) {
                u(i+1, j+1);
            }
        }
    }
    set<vector<vector<int>>> ans;
    for(int i = 1; i <= n; i++) {
        comp[find_set(p[i])].push_back(p[i]);
    }

    for(auto i : comp) {
        if(i.size() > 0) {
            sort(i.begin(), i.end());
            for(auto j : i) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}