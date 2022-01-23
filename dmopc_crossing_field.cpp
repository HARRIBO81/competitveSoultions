//
// Created by ryan javid on 2021-10-24.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, h, X;
ll dirR[] = {-1,0,1,0};
ll dirC[] = {0,1,0,-1};
ll grid[1550][1550];
ll visited[1550][1550];

int main() {
    cin >> n >> h;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> X;
            grid[i][j] = X;
        }
    }
    queue<pair<ll, ll>> q;
    memset(visited,0,sizeof visited);
    q.emplace(0, 0);
    visited[0][0] = true;
    while(!q.empty()) {
        pair<ll, ll> cur = q.front();
        ll x = cur.first;
        ll y = cur.second;
        q.pop();
        if (x == n - 1 && y == n - 1) {
            cout << "yes";
            return 0;
        }
        for (int i = 0; i < 4; i++) {
            ll dx = x + dirR[i];
            ll dy = y + dirC[i];
            if (dx >= 0 || dy >= 0 || x < n || y < n) {
                if (!visited[dx][dy]) {
                    if (abs(grid[x][y] - grid[dx][dy]) <= h) {
                        visited[dx][dy] = 1;
                        q.emplace(dx, dy);
                    }
                }
            }
        }
    }
    cout << "no";
    return 0;
}