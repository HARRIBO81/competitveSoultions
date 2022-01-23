//
// Created by ryan javid on 2021-10-23.
//

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(1000001);
int n, m, x, y, p, q;
bool bfs(int start, int des) {
    queue<int> q;
    vector<bool> visited(1000001);
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        if(cur == des) {
            return true;
        }
        for(auto i : adj[cur]) {
            if(!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
    }
    cin >> p >> q;
    if(bfs(p, q)) {
        cout << "yes";
    }
    else if(bfs(q, p)) {
        cout << "no";
    }
    else {
        cout << "unknown";
    }
}