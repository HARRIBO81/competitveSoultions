//
// Created by ryan javid on 2021-10-31.
//

#include <bits/stdc++.h>
using namespace std;
int n, m, w, x, y, X;
vector<vector<int>> adj;
int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    vector<int> disAnt(101, -1);
    vector<int> disHuman(101, -1);
    cin >> w;
    for(int i = 0; i < w; i++) {
        cin >> X;
        q.push(X);
        disAnt[X] = 0;
    }
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i : adj[cur]) {
            if(disAnt[i] == -1) {
                q.push(i); disAnt[i] = disAnt[cur] + 4;
            }
        }
    }
    q.push(1); disHuman[1] = 0;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i : adj[cur]) {
            if(disHuman[i] == 1 && disHuman[i]+1 < disAnt[i]) {
                q.push(i);
                disHuman[i] = disHuman[i] + 1;
            }
        }
    }
    if(disHuman[n] != -1) {
        cout << disHuman[n] << endl;
    }
    else {
        cout << "sacrifice bobhob314" << endl;
    }


}