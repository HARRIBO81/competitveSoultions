//
// Created by ryan javid on 2021-11-02.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m;
int main() {
    cin >> n >> m;
    ll counter = 0;
    queue<ll> q;
    vector<ll> visited(1000000, 0);
    q.push(n);
    visited[n] = 1;
    while (!q.empty()) {
        ll size = q.size();
        for (ll I = 0; I < size; I++) {
            ll cur = q.front();
            if(cur >= 1e7) {
                cout << counter;
                return 0;
            }
            q.pop();
            if (cur == m) {
                cout << counter;
                return 0;
            } else {
                if (visited[cur * 3] || cur >= 1e7) {
                    continue;
                } else {
                    q.push(cur * 3);
                    visited[cur * 3] = 1;
                }

                if (visited[cur - 1] || cur >= 1e7) {
                    continue;
                } else {
                    q.push(cur - 1);
                    visited[cur - 1] = 1;
                }

                if (visited[cur - 3] || cur >= 1e7) {
                    continue;
                } else {
                    q.push(cur - 3);
                    visited[cur - 3] = 1;
                }

                if (cur%2!=0 || visited[cur/2] || cur >= 1e7) {
                    continue;
                } else {
                    q.push(cur/2);
                    visited[cur/2] = 1;
                }
            }
        }
        counter++;
    }
}