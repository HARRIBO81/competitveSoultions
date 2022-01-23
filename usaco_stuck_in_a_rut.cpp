//
// Created by ryan javid on 2021-10-10.
//

#include <bits/stdc++.h>
using namespace std;
int n;
vector<tuple<int, int, int, int>> inter;
int main() {
    cin >> n;
    char dir [n+1];
    int x [n+1];
    int y [n+1];
    for(int i = 1; i <= n; i++) {
        cin >> dir[i], cin >> x[i], cin >> y[i];
        for(int j = 1; j < i; j++) {
            if(dir[i] == dir[j]) continue;
            int ex = x[i], ey = y[i], nx = x[i], ny = y[i];
            if(dir[i] == 'E') {
                nx = x[j];
                ny = y[j];
            }
            else {
                ex = x[j];
                ey = y[j];
            }
            if(ex < nx && ey > ny) {
                inter.emplace_back(nx, ey, j, i);
            }
        }
    }
    for(auto i : inter) {
        cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << " " << get<3>(i);
        cout << endl;
    }
    bool stop[n+1]; int ans[n+1];
    for(tuple<int,int,int,int> e : inter) {
        if(stop[get<2>(e)] || stop[get<3>(e)]) continue;
        int ta = get<0>(e) - x[get<2>(e)] + get<1>(e);
        int tb = get<0>(e) - ;
        if(ta < tb) {
            stop[get<3>(e)] = true;
            ans[get<3>(e)] = tb;
        } else if(ta > tb) {
            stop[get<2>(e)] = true;
            ans[get<2>(e)] = ta;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << stop[i] ? ans[i]: "infinite";
    }
}