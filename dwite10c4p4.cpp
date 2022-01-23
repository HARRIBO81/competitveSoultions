//
// Created by ryan javid on 2021-12-24.
//

#include <bits/stdc++.h>
using namespace std;
int dirR[4] = {0,1,0,-1}, dirC[4] = {1,0,-1,0};
int main() {
    for(int T = 0; T < 5; T++) {
        int grid[15][15];
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }
        vector<int> M;
        for(int start = 0; start < 10; start++) {
            int dis[15][15];
            memset(dis,-1,sizeof dis);
            pair<int, int> s = {0, start};
            queue<pair<int, int>> q;
            q.emplace(s.first, s.second);
            dis[s.first][s.second] = 0;
            while(!q.empty()) {
                pair<int, int> cur = q.front(); q.pop();
                int x = cur.first, y = cur.second;
                if(x == 9) {
                    M.push_back(dis[x][y]);
                }
                for(int i = 0; i < 4; i++) {
                    int dx = x + dirR[i], dy = y + dirC[i];
                    if (dx < 0 || dy < 0 || dx >= 10 || dy >= 10) {
                        continue;
                    }
                    if (abs(grid[x][y] - grid[dx][dy]) > 1 || dis[dx][dy] != -1) {
                        continue;
                    }
                    dis[dx][dy] = dis[x][y] + 1;
                    q.emplace(dx, dy);
                }
            }
        }
        cout << *min(M.begin(), M.end()) << endl;
    }

}