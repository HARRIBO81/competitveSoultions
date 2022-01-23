//
// Created by ryan javid on 2021-10-24.
//

#include <bits/stdc++.h>
using namespace std;
int n, m, x, y;
vector<vector<int>> adj(100001);
int main() {
    cin >> n;
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    vector<bool> visited(100001, false);
    q.push(0);
    visited[0] = true;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(auto i : adj[cur]) {
            if(!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    if(visited[n-1]) {
        cout << "yes";
    } else {
        cout << "no";
    }
}