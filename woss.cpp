//
// Created by ryan javid on 2021-11-02.
//

#include <bits/stdc++.h>
using namespace std;
int n, m;
int dirR[4] = {0,1,0,-1};
int dirC[4] = {1,0,-1,0};
char grid[1000][1000], X;
int dis[1000][1000];
void clear( std::queue<pair<int, int>> &q )
{
    queue<pair<int, int>> empty;
    swap( q, empty );
}
int main() {
    vector<tuple<char, int, int>> portals;
    cin >> n >> m;
    int total = 0;
    pair<int, int> start, first, second, third, fourth;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> X;
            if (X == '0') {
                start.first = i, start.second = j;
            }
            if (X == '1') {
                first.first = i, first.second = j;
            }
            if (X == '2') {
                second.first = i, second.second = j;
            }
            if (X == '3') {
                third.first = i, third.second = j;
            }
            if (X == '4') {
                fourth.first = i, fourth.second = j;
            }
            if (isalpha(X) && islower(X)) {
                portals.emplace_back(X-=32, i, j);
            }
            grid[i][j] = X;
            dis[i][j] = -1;
        }
    }

        queue<pair<int, int>> q;
        q.emplace(start.first, start.second);
        dis[start.first][start.second] = 0;
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            int x = cur.first;
            int y = cur.second;
            q.pop();
            if (x == first.first && y == first.second) {
                total += dis[x][y];
            }
            for (int i = 0; i < 4; i++) {
                int dx = x + dirR[i];
                int dy = y + dirC[i];
                if (dx < 0 || dy < 0 || dx >= n || dy >= m) {
                    continue;
                }
                if (grid[dx][dy] == '#' || dis[dx][dy] != -1) {
                    continue;
                }
                if (isalpha(grid[dx][dy]) && isupper(grid[dx][dy])) {
                    for (auto I : portals) {
                        if (grid[dx][dy] == get<0>(I)) {
                            q.emplace(get<1>(I), get<2>(I));
                        }
                    }
                } else {
                    dis[dx][dy] = dis[x][y] + 1;
                    q.emplace(dx, dy);
                }
            }
        }
        if (dis[first.first][first.second] == -1) {
            cout << "-1";
            return 0;
        }
        clear(q);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dis[i][j] = -1;
            }
        }
        q.emplace(first.first, first.second);
        dis[first.first][first.second] = 0;
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();
            int x = cur.first;
            int y = cur.second;
            if (x == second.first && y == second.second) {
                total += dis[x][y];
            }
            for (int i = 0; i < 4; i++) {
                int dx = x + dirR[i];
                int dy = y + dirC[i];
                if (dx < 0 || dy < 0 || dx >= n || dy >= m) {
                    continue;
                }
                if (grid[dx][dy] == '#' || dis[dx][dy] != -1) {
                    continue;
                }
                if (isalpha(grid[dx][dy]) && isupper(grid[dx][dy])) {
                    for (auto I : portals) {
                        if (grid[dx][dy] == get<0>(I)) {
                            q.emplace(get<1>(I), get<2>(I));
                            dis[dx][dy] = dis[x][y];
                        }
                    }
                } else {
                    dis[dx][dy] = dis[x][y] + 1;
                    q.emplace(dx, dy);
                }
            }
        }
        if (dis[second.first][second.second] == -1) {
            cout << "-1";
            return 0;
        }

        clear(q);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dis[i][j] = -1;
            }
        }
        q.emplace(second.first, second.second);
        dis[second.first][second.second] = 0;
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();
            int x = cur.first;
            int y = cur.second;
            if (x == third.first && y == third.second) {
                total += dis[x][y];
            }
            for (int i = 0; i < 4; i++) {
                int dx = x + dirR[i];
                int dy = y + dirC[i];
                if (dx < 0 || dy < 0 || dx >= n || dy >= m) {
                    continue;
                }
                if (grid[dx][dy] == '#' || dis[dx][dy] != -1) {
                    continue;
                }
                if (isalpha(grid[dx][dy]) && isupper(grid[dx][dy])) {
                    for (auto I : portals) {
                        if (grid[dx][dy] == get<0>(I)) {
                            q.emplace(get<1>(I), get<2>(I));
                            dis[dx][dy] = dis[x][y];
                        }
                    }
                } else {
                    dis[dx][dy] = dis[x][y] + 1;
                    q.emplace(dx, dy);
                }
            }
        }
        if (dis[third.first][third.second] == -1) {
            cout << "-1";
            return 0;
        }

        clear(q);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dis[i][j] = -1;
            }
        }
        q.emplace(third.first, third.second);
        dis[third.first][third.second] = 0;
        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();
            int x = cur.first;
            int y = cur.second;
            if (x == fourth.first && y == fourth.second) {
                total += dis[x][y];
            }
            for (int i = 0; i < 4; i++) {
                int dx = x + dirR[i];
                int dy = y + dirC[i];
                if (dx < 0 || dy < 0 || dx >= n || dy >= m) {
                    continue;
                }
                if (grid[dx][dy] == '#' || dis[dx][dy] != -1) {
                    continue;
                }
                if (isalpha(grid[dx][dy]) && isupper(grid[dx][dy])) {
                    for (auto I : portals) {
                        if (grid[dx][dy] == get<0>(I)) {
                            q.emplace(get<1>(I), get<2>(I));
                            dis[dx][dy] = dis[x][y];
                        }
                    }
                } else {
                    dis[dx][dy] = dis[x][y] + 1;
                    q.emplace(dx, dy);
                }
            }
        }
        if (dis[fourth.first][fourth.second] == -1) {
            cout << "-1";
            return 0;
        }
        cout << total;
    }