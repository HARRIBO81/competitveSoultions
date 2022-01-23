//
// Created by ryan javid on 2021-10-31.
//

#include <bits/stdc++.h>
using namespace std;
int n, x, y;

bool bfs(vector<vector<int>> adj) {
    queue<int> q;
    vector<int> parent(n, -1);
    vector<bool> visited(1000001, false);
    int cur = q.front();
    q.pop();
    for(int i : adj[cur]) {
        if(!visited[i]) {
            visited[i] = true;
            q.push(i);
            parent[i] = cur;
        } else if(parent[cur] != i) {
            return true;
        }
    }
    return false;
}


int main() {
    vector<vector<int>> adj(101);
    for(int I = 0; I < 5; I++) {
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            adj[x].push_back(y);
        }
        vector<bool> visited(101, false);
        for (int i = 0; i < n; i++) {
            if (!visited[i] && bfs(adj)) {
                cout << i;
                return 0;
            }
        }
    }
}