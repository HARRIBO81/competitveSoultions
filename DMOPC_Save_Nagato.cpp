//
// Created by ryan javid on 2021-11-21.
//

#include <bits/stdc++.h>
using namespace std;
int n, x, y, far, len, dis1[500003], dis2[500003];
vector<vector<int>> adj(500003);
void dfs(int cur, int pre, int dis, int d[]) {
    if(dis > len) {
        len = dis;
        far = cur;
    }
    d[cur] = dis;
    for(int I : adj[cur]) {
        if(I != pre) {
            dfs(I, cur, dis+1, d);
        }
    }
}

int main() {
    cin >> n;
    for(int i = 1; i < n; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1, -1, 0, dis1);
    len = 0;
    dfs(far, -1, 0, dis1);
    len = 0;
    dfs(far, -1, 0, dis2);
    for(int i = 1; i <= n; i++) {
        cout << max(dis1[i], dis2[i]) + 1 << endl;
    }

}