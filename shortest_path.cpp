//
// Created by ryan javid on 2021-10-23.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    int cnt = 0;
    int adj[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> x;
            adj[i][j] = x;
        }
    }
    queue<int> q;
    vector<bool> visited(101, false);
    vector<int> distance(101, 0);
    q.push(0);
    visited[0] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cnt++;
//        if(cur == n-1) {
//            cout << cnt-1;
//            return 0;
//        }
        for(int i = 0; i < n; i++) {
            if(adj[cur][i] == 1 && (!visited[i])) {
                    visited[i] = true;
                    q.push(i);
                    distance[i] = distance[cur] + 1;
            }
        }
    }
    cout << distance[n-1];
}