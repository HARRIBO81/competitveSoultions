//
// Created by ryan javid on 2021-07-31.
//

#include <bits/stdc++.h>
using namespace std;
int x, y, maxium = 0;
int main() {
    set<pair<int, int>> coords;
    pair<int, int> p1;
    pair<int, int> p2;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        coords.insert(pair<int,int>(x,y));
    }
    for(auto i : coords) {
        for(auto j : coords) {
            p1 = pair<int,int>(i.first, j.second);
            p2 = pair<int,int>(j.first, i.second);
            if(coords.find(p1) != coords.end() && coords.find(p2) != coords.end()) {
                maxium = max(maxium, (abs(j.first - i.first) * abs(j.second - i.second)));
            }
        }
    }
    cout << maxium;
}