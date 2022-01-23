//
// Created by ryan javid on 2021-11-21.
//

#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;
vector<pair<int, int>> adj[100003];

int main() {
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        adj[a].emplace_back(b, c);
        adj[b].emplace_back(a, c);
        sum += c;
    }
    int mx = 0;
    int dis[100003];
    queue<int> q;
    memset(dis, -1, sizeof(dis));
    dis[0] = 0;
    q.push(0);
    while (!q.empty()) {
        int cur = q.front();
        mx = max(mx, dis[cur]);
        q.pop();
        for(auto I : adj[cur]) {
            if(dis[I.first] == -1) {
                q.push(I.first);
                dis[I.first] += dis[cur] + I.second;
            }
        }
    }
    cout << (2*sum - mx);

}