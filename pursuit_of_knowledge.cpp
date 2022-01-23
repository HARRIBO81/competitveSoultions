//
// Created by ryan javid on 2021-11-21.
//

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(1003);
int n, m, t, x, y, q;
int bfs(int s, int e, int T) {
    int dis[1003];
    queue<int> q;
    memset(dis, -1, sizeof(dis));
    q.push(s);
    dis[s] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i : adj[cur]) {
            if(dis[i] == -1) {
                q.push(i);
                dis[i] = dis[cur]+T;
            }
        }
    }
    return dis[e];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> t;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> x >> y;
        if(bfs(x,y,t) == -1) {
            cout << "Not enough hallways!" << endl;
        } else {
            cout << bfs(x,y,t) << endl;
        }
    }


}