//
// Created by ryan javid on 2021-12-12.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1e5+5;
int n, q, p[MM];
char op;
int find_set(int d) {
    return d==p[d]? p[d] : p[d] = find_set(p[d]);
}

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i++) {
        p[i] = i;
    }
    for(int i = 1, x, y; i <= q; i++) {
        cin >> op >> x >> y;
        if(op == 'A') {
            p[find_set(x)] = find_set(y);
        } else {
            cout << (find_set(x)==find_set(y)? "Y\n" : "N\n");
        }
    }
}