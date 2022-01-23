//
// Created by ryan javid on 2021-12-24.
//

#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
map<int, string> MP;
set<string> si;
vector<int> adj[2000];
int inD[2000], n;
string a, b;
int getNode(string x) {
    if(mp.find(x) == mp.end()) {
        mp.emplace(x,mp.size());
    }
    return mp[x];
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        si.insert(a), si.insert(b);
        int A = getNode(a)+1, B = getNode(b)+1;
        MP[A] = a, MP[B] = b;
        adj[A].push_back(B);
        inD[B]++;
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    queue<int> topo;
    for (int i = 1; i <= si.size(); i++) {
        if (inD[i] == 0) {
            pq.push(i);
        }
    }
    while(!pq.empty()) {
        int cur = pq.top();
        pq.pop();
        topo.push(cur);
        for(int i : adj[cur]) {
            inD[i]--;
            if(inD[i] == 0) {
                pq.push(i);
            }
        }
    }
    vector<string> vec;
    while(!topo.empty()) {
        vec.push_back(MP[topo.front()]);
        topo.pop();
    }
    reverse(vec.begin(), vec.end());
    for(auto I : vec) {
        cout << I << endl;
    }



}