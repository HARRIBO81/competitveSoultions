//
// Created by ryan javid on 2021-10-31.
//

#include <bits/stdc++.h>
using namespace std;
char grid[21][21], operation;
int plusR[4] = {0,1,0,-1};
int plusC[4] = {1,0,-1,0};
int NESW[2] = {1, -1};
int t, r, c;
int visited[21][21], distancee[21][21];
int main() {
    cin >> t;
    for (int I = 0; I < t; I++) {
        memset(grid, 0, sizeof grid);
        memset(visited, 0, sizeof visited);
        memset(distancee, 0, sizeof distancee);
        cin >> r >> c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> operation;
                grid[i][j] = operation;
            }
        }
        queue<pair<int, int>> q;
        q.emplace(0, 0);
        int cnt = 1;
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            int x = cur.first;
            int y = cur.second;
            q.pop();
            if (grid[x][y] == '+') {
                for (int i = 0; i < 4; i++) {
                    int dx = x + plusR[i];
                    int dy = y + plusC[i];
                    if (dx < 0 || dy < 0 || dx >= r || dy >= c) {
                        continue;
                    }
                    if (grid[dx][dy] == '*') {
                        continue;
                    }
                    visited[dx][dy] = 1;
                    distancee[dx][dy] = distancee[x][y] + 1;
                    q.emplace(dx, dy);
                }
            }
            else if (grid[x][y] == '-') {
                if(grid[x+1][y] != '*' && x < r && visited[])
            }
            else if (grid[x][y] == '|') {
                for (int i = 0; i < 2; i++) {
                    int dx = x;
                    int dy = y + NESW[i];
                    if (dx < -1 || dy < -1 || dx > r || dy > c) {
                        continue;
                    }
                    if (grid[dx][dy] == '*') {
                        continue;
                    }
                    visited[dx][dy] = 1;
                    distancee[dx][dy] = distancee[x][y] + 1;
                    q.emplace(dx, dy);
                }
            }
        }
        cout << visited[r-1][c-1] << endl;
    }
}