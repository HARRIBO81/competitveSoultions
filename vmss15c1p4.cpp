//
// Created by ryan javid on 2022-01-22.
//

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int MM = 2022; // ;)
int t, n, m, g, cnt = 0;
priority_queue<pii, vector<pii>, greater<>> pq;
vector<pii> adj[MM];
vector<int> foodBasic;
vector<int> dist(MM,INT_MAX);

int main() {
    cin >> t >> n >> m >> g;
    for(int i = 0, x; i < g; i++) {
        cin >> x; foodBasic.push_back(x);
    }
    for(int i = 0, a, b, l; i < m; i++) {
        cin >> a >> b >> l;
        adj[a].emplace_back(b, l);
    }
    dist[0]=0, pq.emplace(0,0);
    while(!pq.empty()) {
        int curNode = pq.top().first; pq.pop();
        for(pii i : adj[curNode]) {
            int adjNode = i.first, weight = i.second;
            if(dist[adjNode] > dist[curNode] + weight) {
                dist[adjNode] = dist[curNode] + weight;
                pq.emplace(adjNode, dist[adjNode]);
            }
        }
    }

    for(int i : foodBasic) {
        if(dist[i] <= t) {
            cnt++;
        }
    }
    cout << cnt;
}