//
// Created by ryan javid on 2021-08-13.
//

#include <bits/stdc++.h>
using namespace std;
int n, x, y, board[1000][1000];
vector<pair<int, int>> directions;
int main() {
    directions.emplace_back(-1,0), directions.emplace_back(0,-1), directions.emplace_back(0,1), directions.emplace_back(1,0);
    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j < 1000; j++) {
            board[i][j] = -1;
        }
    }
    int total = 0;
    cin >> n;
    for(int I = 0; I < n; I++) {
        cin >> x >> y;
        x++, y++;
        int cnt = 0;
        board[x][y] = 0;
        for(int i = 0; i < 4; i++) {
            if(board[x + directions[i].first][y + directions[i].second] >= 0) {
                cnt++;
                board[x + directions[i].first][y + directions[i].second]++;
                if(board[x + directions[i].first][y + directions[i].second] == 3) total++;
                else if(board[x + directions[i].first][y + directions[i].second] > 3) {
                    total--;
                }
            }
        }
        board[x][y] = cnt;
        if(board[x][y] == 3) {
            total++;
        }
        cout << total << endl;
    }
}