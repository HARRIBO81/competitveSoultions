//
// Created by ryan javid on 2021-11-16.
//

#include <bits/stdc++.h>
using namespace std;
int n, x, y;
vector<vector<int>> adj(100000);
pair<int, int> bfs(int u) {
    int dis[100000];
    queue<int> q;
    memset(dis, -1, sizeof(dis));
    q.push(u);
    dis[u] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i : adj[cur]) {
            if(dis[i] == -1) {
                q.push(i);
                dis[i] = dis[cur]+1;
            }
        }
    }
    int maxDis = 0;
    int nodeIdx;
    for (int i = 0; i <= n; i++)
    {
        if (dis[i] > maxDis)
        {
            maxDis = dis[i];
            nodeIdx = i;
        }
    }
    return make_pair(nodeIdx, maxDis);
}


int main() {
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    pair<int, int> pair1 = bfs(1);
    pair<int, int> pair2 = bfs(pair1.first);
    cout << pair2.second;
}
