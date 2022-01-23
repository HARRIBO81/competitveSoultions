//
// Created by ryan javid on 2021-12-20.
//

#include <bits/stdc++.h>
using namespace std;

char grid[52][52], c;
int dis[52][52], R[] = {0,1}, L[]={1,0}, T, n, k, ans;

void dfs(int r, int c, int dir, int turn) {
    if(r == n && c == n) {
        ans++; return;
    }
    for(int i = 0; i<2; i++) {
        int dx = r+R[i], dy = c+L[i], nk = turn + (i==dir? 0 : 1);
        if(dx > n || dy > n || grid[dx][dy] == 'H' || nk > k || (nk == k && dx != n && dy != n)) continue;
        dfs(dx,dy,i,nk);
    }
}


int main() {
    for (cin >> T; T--;) {
        cin >> n >> k, ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> grid[i][j];
            }
        }
        dfs(1, 1, -1, -1);
        cout << ans << endl;
    }
}