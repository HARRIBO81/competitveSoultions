//
// Created by ryan javid on 2022-01-22.
//

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int MM = 2022; // ;)
int n, m, b, q;
vector<pii> adj[MM];
priority_queue<pii, vector<pii>, greater<>> pq;
vector<int> dist(MM,INT_MAX);

int main() {
    cin >> n >> m >> b >> q;
    for(int i = 0, x, y, z; i < m; i++) {
        cin >> x >> y >> z;
        adj[x].emplace_back(y, z), adj[y].emplace_back(x,z);
    }
    dist[b] = 0; pq.emplace(b, 0);
    while(!pq.empty()) {
        int curNode = pq.top().first; pq.pop();
        for(pii i : adj[curNode]) {
            int adjNode = i.first, weight = i.second;
            if(dist[adjNode] > dist[curNode] + weight) {
                dist[adjNode] = dist[curNode] + weight;
                pq.push(make_pair(adjNode, dist[adjNode]));
            }
        }
    }
    for(int i = 0, x; i < q; i++) {
        cin >> x;
        if(dist[x] == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << dist[x] << endl;
        }
    }

}