//
// Created by ryan jav on 2021-12-21.
//

#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int main() {
    cin >> n >> m >> k;
    char grid[n+5][m+5];
    int vis[n+5][m+5], dirR[] = {0,1,0,-1}, dirC[] = {1,0,-1,0};
    memset(vis,0,sizeof vis);
    memset(grid,'.',sizeof grid);
    for (int i = 0, r, c; i < k; i++) {
        cin >> r >> c;
        grid[r-1][c-1] = '#';
    }


    queue<pair<int, int>> q;
    vis[0][0] = 1;
    q.emplace(0, 0);
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;
        for (int i = 0; i < 4; i++) {
            int dx = x + dirC[i];
            int dy = y + dirR[i];
            if (dx < 0 || dy < 0 || dx > n-1 || dy > m-1) {
                continue;
            }
            if (grid[dx][dy] == '#' || vis[dx][dy]) {
                continue;
            }
            vis[dx][dy] = 1;
            q.emplace(dx, dy);
        }
    }
    if(vis[n-1][m-1]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}