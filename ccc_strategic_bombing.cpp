//
// Created by ryan javid on 2021-10-25.
//

#include <bits/stdc++.h>
using namespace std;
int adj[27][27];
char x, y;
bool bfs() {
    vector<int> visited(27, 0);
    queue<int> q;
    q.push(0);
    visited[0] = 1;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int I = 0; I < 27; I++) {
            if((!visited[I]) && adj[cur][I] == 1) {
                q.push(I);
                visited[I] = 1;
            }
        }
    }
    if(visited[1] == 1) {
        return true;
    } else {
        return false;
    }
}


int main() {
    vector<pair<char,char>> edge;
    while (true) {
        cin >> x >> y;
        if(x == '*' && y == '*') {
            break;
        }
        int X = (int)x - 65;
        int Y = (int)y - 65;
        adj[X][Y] = 1;
        adj[Y][X] = 1;
        edge.emplace_back(x,y);
    }
    int count = 0;
    for(auto I: edge) {
        int X = (int)I.first - 65;
        int Y = (int)I.second - 65;
        adj[X][Y] = 0;
        adj[Y][X] = 0;
        if(!bfs()) {
            cout<< I.first << I.second << endl;
            count++;
        }
        adj[X][Y] = 1;
        adj[Y][X] = 1;
    }
    cout << "There are " << count << " disconnecting roads." << endl;

}