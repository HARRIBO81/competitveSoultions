//
// Created by ryan javid on 2022-01-22.
//

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int MM = 5050;
int n, t, k, d, dist[MM], ans=INT_MAX;
vector<pii> adj[MM];
vector<pii> q;
priority_queue<pii, vector<pii>, greater<>> pq;

void dijkstra(int source) {
    dist[source] = 0, pq.emplace(source,0);
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
}

int main() {
    cin >> n >> t;
    for(int i = 0, x, y, c; i < t; i++) {
        cin >> x >> y >> c;
        adj[x].emplace_back(y,c), adj[y].emplace_back(x,c);
    }
    cin >> k;
    for(int i = 0, z, pz; i < k; i++) {
        cin >> z >> pz;
        q.emplace_back(z, pz);
    }
    cin >> d;
    for(pii i : q) {
        memset(dist,INT_MAX,sizeof dist);
        dijkstra(i.first);
        cout << dist[d]+i.second << endl;
    }
}