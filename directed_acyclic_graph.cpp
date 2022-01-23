//
// Created by ryan javid on 2021-11-06.
//

#include <bits/stdc++.h>
using namespace std;
int n, graph[1000][1000];
bool dfs(bool visited[], stack<bool> dfsStack, int x) {
    memset(visited, false, sizeof visited);
    if(!visited[x]) {
        visited[x] = true;
        dfsStack.push(x);
    }

}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
}