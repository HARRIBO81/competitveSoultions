//
// Created by ryan javid on 2021-07-28.
//

#include <bits/stdc++.h>
using namespace std;
unordered_set<string> r;
unordered_set<string> s;
string job;
int cnt = 0;
const int n; int m;
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> job;
        r.insert(job);
    }
    s = r;
    int ogSize = r.size();
    for(int i = 0, x; i < m; i++) {
        cin >> x;
        for(int j = 0; j < x; j++) {
            cin >> job;
            r.insert(job);
        }
        if(ogSize != r.size()) {
            r = s;
            continue;
        }
        cnt++;
    }
    cout << cnt;
}