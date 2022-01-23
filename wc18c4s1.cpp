//
// Created by ryan javid on 2021-12-21.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1e6+5;
int p[MM], r[MM], n, m, k;
char s[MM];
int find_set(int d) {
    return d==p[d]? p[d] : p[d] = find_set(p[d]);
}
void u(int u, int v) {
    u = find_set(u);
    v = find_set(v);
    if(r[u] < r[v]) {
        p[u] = v;
    }
    else if(r[v] < r[u]) {
        p[v] = u;
    }
    else {
        p[v] = u;
        r[u]++;
    }
}
int main() {
    scanf("%d %d %d %s", &n, &m, &k, s+1);
    for(int i=1; i<=n; i++) p[i] = i;
    for(int i = 1, a, b; i <= m; i++) {
        cin >> a >> b;
        if(s[a] == s[b]) {
            u(a,b);
        }
    }
    int cnt = 0;
    for(int i = 1, a, b; i <= k; i++) {
        cin >> a >> b;
        cnt += find_set(a) == find_set(b);
    }
    cout << cnt;
}