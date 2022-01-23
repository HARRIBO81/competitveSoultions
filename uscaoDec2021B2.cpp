//
// Created by ryan javid on 2021-12-20.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1e5 + 2;
int n, a[MM], d[MM], ans;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1, x; i <= n; i++) {
        cin >> x;
        d[i] = a[i] - x;
    }
    for(int i = 1; i <=n+1; i++) {
        int dif = d[i]-d[i-1];
        if(dif > 0) ans+=dif;
    }
    cout << ans << endl;

}