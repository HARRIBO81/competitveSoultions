//
// Created by ryan javid on 2021-12-21.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1000001;
int m, n, x, start, last, vis[MM];
vector<int> adj[MM];
int main() {
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            if(i == 1 && j == 1) start = x;
            if(i == m && j == n) last = x;
            adj[i*j].push_back(x);
        }
    }
    queue<int> q;
    q.push(start);
    vis[start] = 1;

    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for(auto i : adj[cur]) {
            if(!vis[i]) {
                vis[i] = 1;
                q.push(i);
            }
        }
    }
    if(vis[m*n]) {
        cout << "yes";
    } else {
        cout << "no";
    }





}