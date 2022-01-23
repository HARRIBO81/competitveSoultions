//
// Created by ryan javid on 2021-12-19.
//

// ON SPOJ

#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
const LL MM = 100000;
LL n, m, inD[MM];
vector<LL> adj[MM];
int main() {
    cin >> n >> m;
    for(LL i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        inD[y]++;
    }
    priority_queue <LL, vector<LL>, greater<LL> > pq;
    queue<LL> topo;
    for(LL i = 1; i <= n; i++) {
        if(inD[i] == 0) {
            pq.push(i);
        }
    }

    while(!pq.empty()) {
        LL cur = pq.top();
        topo.push(cur);
        pq.pop();
        for(LL i : adj[cur]) {
            inD[i]--;
            if(inD[i] == 0) {
                pq.push(i);
            }
        }
    }

    if(topo.size() != n) {
        cout << "Infinite Loops Present";
    } else {
        cout << "No Infinite Loops";
    }

}