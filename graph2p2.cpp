//
// Created by ryan javid on 2021-12-13.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1050;
int n, visited[MM], inD[MM];
vector<int> adj[MM];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1, q; j <= n; j++) {
            cin >> q;
            if(q == 1) {
                adj[i].push_back(j);
                inD[j]++;
            }
        }
    }

    queue<int> pq;
    vector<int> output;
    for(int i = 1; i <= n; i++) {
        if(inD[i] == 0) pq.push(i);
    }
    while (!pq.empty()) {
        int cur = pq.front();
        pq.pop();
        output.push_back(cur);
        for(int i : adj[cur]) {
            inD[i]--;
            if(inD[i] == 0) {
                pq.push(i);
            }
        }
    }

    if(output.size()!=n) {
        cout << "NO";
    } else {
        cout << "YES";
    }


}