//
// Created by ryan javid on 2021-10-31.
//

#include <bits/stdc++.h>
using namespace std;
int T, l, w;
int dirR[4] = {0,1,0,-1};
int dirC[4] = {1,0,-1,0};
char grid[51][51], x;
int visited[51][51];
int main() {
    pair<int, int> start;
    cin >> T;
    for(int I = 0; I < T; I++) {
        bool worth = false;
        memset(visited, -1, sizeof visited);
        cin >> l >> w;
        for(int i = 0; i < w; i++) {
            for(int j = 0; j < l; j++) {
                cin >> x;
                grid[i][j] = x;
                if(x == 'C') {
                    start.first = i, start.second = j;
                }
            }
        }
        queue<pair<int, int>> q;
        q.emplace(start.first, start.second);
        visited[start.first][start.second] = 0;
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            int curX = cur.first;
            int curY = cur.second;
            q.pop();
            if(grid[curX][curY] == 'W') {
                worth = true;
                if(visited[curX][curY] >= 60) {
                    cout << "#notworth" << endl;
                } else {
                    cout << visited[curX][curY] << endl;
                    break;
                }
            }
            for(int i = 0; i < 4; i++) {
                int dx = curX + dirR[i];
                int dy = curY + dirC[i];
                if(dx < 0 || dy < 0 || dx >= w || dy >= l) {
                    continue;
                }
                if(grid[dx][dy] == 'X' || visited[dx][dy] != -1) {
                    continue;
                }
                visited[dx][dy] = visited[curX][curY]+1;
                q.emplace(dx,dy);
            }
        }
        if(!worth) {
            cout << "#notworth" << endl;
        }
    }
}