//
// Created by ryan javid on 2021-12-19.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1e6+6;
int p[MM], r[MM], n, m;
vector<int> mst;
struct node {
    int u;
    int v;
    int wt;
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};
vector<node> edges;
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
    cin >> n >> m;
    for(int i = 1; i<=n;i++) {
        p[i] = i;
        r[i] = 0;
    }
    int cnt = 0;
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        edges.emplace_back(u, v, i);
        edges.emplace_back(v,u,i);
    }

    for(node i : edges) {
        if(find_set(i.v) != find_set(i.u)) {
            mst.push_back(i.wt);
            u(i.u, i.v);
        }
    }
    set<int> s;
    for(int i = 1; i<=n; i++) {
        s.insert(p[i]);
    }
        if(cnt <= 1) {
        cout << "Disconnected Graph";
    }
    else {
        for(auto i : mst) {
            cout << i+1 << endl;
        }
    }
}
