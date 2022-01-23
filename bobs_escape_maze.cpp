//
// Created by ryan javid on 2021-11-07.
//

#include <bits/stdc++.h>
using namespace std;
int m, n;
int startR, startC;
int endR, endC;
char grid[1001][1001];
int dirX[12] = {0,1,0,-1,1,2,2, 1, -1,-2,-2,-1};
int dirY[12] = {1,0,-1,0,2,1,-1,-2,-2,-1,1,2};
int dis[1001][1001];
int main() {
    cin >> m >> n;
    cin >> startR >> startC;
    cin >> endR >> endC;
    startR-=1;
    startC-=1;
    endR-=1;
    endC-=1;
    memset(dis,-1,sizeof dis);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    queue<pair<int, int>> q;
    q.emplace(startR, startC);
    dis[startR][startC] = 0;
    while(!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;
        if(x == endR && y == endC) {
            cout << dis[x][y] << endl;
            return 0;
        }
        for(int i = 0; i < 12; i++) {
            int dx = x + dirX[i];
            int dy = y + dirY[i];
            if(dx < 0 || dy < 0 || dx >= m || dy >= n) {
                continue;
            }
            if(grid[dx][dy] == '#' || dis[dx][dy] != -1) {
                continue;
            }
            dis[dx][dy] = dis[x][y] + 1;
            q.emplace(dx, dy);
        }
    }
    cout << "-1";
}
