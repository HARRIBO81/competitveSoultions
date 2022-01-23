//
// Created by ryan javid on 2021-12-01.
//


#include <bits/stdc++.h>
using namespace std;
const int MM = 10001;
vector<int> adj[MM];
int m, inD[MM];
string a, b;
unordered_map<string, int> mp;
int main() {
    cin >> m;
    int cnt = 0;
    for(int i = 1; i <= m; i++) {
        cin >> a >> b;

    }
    priority_queue <int, vector<int>, greater<int> > pq;
    queue<int> output;
    for(int i = 1; i <= n; i++) {
        if(inD[i] == 0) pq.push(i);
    }
    while (!pq.empty()) {
        int cur = pq.top();
        output.push(cur);
        pq.pop();
        for(int i : adj[cur]) {
            inD[i]--;
            if(inD[i] == 0) {
                pq.push(i);
            }
        }
    }


    while(!output.empty()) {
        cout << output.front() << " ";
        output.pop();
    }

//    if(output.size()!=n) {
//        cout << "N";
//    } else {
//        cout << "Y";
//    }


}
