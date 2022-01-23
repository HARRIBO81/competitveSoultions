//
// Created by ryan javid on 2022-01-22.
//

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int MM = 1010;
int n, m;
priority_queue <pii, vector<pii>, greater<>> pq;
vector<pii> adj[MM];
vector<int> dist(MM,INT_MAX);

int main() {
    cin >> n >> m;
    for(int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        adj[v].emplace_back(u,w), adj[u].emplace_back(v,w);
    }
    dist[1]=0, pq.push(make_pair(1, 0)); // spruce node
    while(!pq.empty()) {
        int cur = pq.top().first; pq.pop();
        for(auto i : adj[cur]) {
            int adjNode = i.first, weight = i.second;
            if(dist[adjNode] > dist[cur] + weight) {
                dist[adjNode] = dist[cur] + weight;
                pq.push(make_pair(adjNode, dist[adjNode]));
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        if(dist[i] == INT_MAX) {
            cout << -1 << endl;
        } else {cout << dist[i] << endl;}
    }


}