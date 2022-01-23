//
// Created by ryan javid on 2021-12-12.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 200001;
int n, q, m, p[MM];
char op;
int find_set(int d) {
    return d==p[d]? p[d] : p[d] = find_set(p[d]);
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        p[i] = i;
    }
    int cycle = 0;
    for(int i = 0, x, y; i < m; i++) {
        cin >> x >> y;
        x = find_set(x); y = find_set(y);
        if(x != y) {
            p[x] = y;
        } else {
            cycle++;
        }
    }
    if(cycle <= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}