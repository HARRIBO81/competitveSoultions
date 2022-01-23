//
// Created by ryan javid on 2021-12-12.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 100001;
struct E {int u, v, w;};
int n, m, d, ans, p[MM]; vector<int> dest; vector<E> edge;
int find_set(int d) {
    return d==p[d]? p[d] : p[d] = find_set(p[d]);
}
int main() {
    cin >> n >> m >> d;
    for(int i = 1; i <= n; i++) {
        p[i] = i;
    }
    for(int i = 1, u, v, w; i <= m; i++) {
        cin >> u >> v >> w;
        edge.push_back({u, v, w});
    }
    for(int i = 1, x; i <= d; i++) {
        cin >> x; dest.push_back(x);
    }
    sort(edge.begin(), edge.end(), [](E &a, E &b) {return a.w > b.w;});
    for(int i = 0, j =0; j < dest.size(); j++) {
        int x = dest[j];
        for(; find_set(1) != find_set(x); i++) {
            int u = find_set(edge[i].u), v = find_set(edge[i].v);
            if(u!=v) {
                p[u] = v;
                ans = edge[i].w;
            }
        }
    }
    cout << ans << endl;



}