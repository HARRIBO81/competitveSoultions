//
// Created by ryan javid on 2021-12-12.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 200001;
int n, q, m, p[MM];
char op;
string s;
int find_set(int d) {
    return d==p[d]? p[d] : p[d] = find_set(p[d]);
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        p[i] = i;
    }
    cin >> s;
    for(int i = 1; i < n; i++) {

    }
    for(int i = 1,u, v; i < n; i++) {
        cin >> u >> v >> op;
        if(s[u-1]!=op && s[v-1]!=op && find_set(u) == find_set(v)) {
            cout << 0;
        } else {
            cout << 1;
        }
    }

}