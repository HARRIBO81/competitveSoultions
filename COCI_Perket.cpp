//
// Created by ryan javid on 2021-09-18.
//

#include <bits/stdc++.h>
using namespace std;
int smallest = INT_MAX;
vector<pair<int,int>> a;
void combos(pair<int,int> i, int n, vector<pair<int,int>> p) {
    if(i > n) {
        return;
    }
    combos(i+1, n, p);
    a.push_back(i);


}


int n, x, y;
int main() {
    vector<pair<int,int>> p;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        p.emplace_back(x,y);
    }
    perms(p,1,0);
    cout << smallest;
}