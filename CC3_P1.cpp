//
// Created by ryan javid on 2021-08-21.
//

#include <bits/stdc++.h>
using namespace std;
int n, m;
char a;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int cnt = m;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a == 'o') {
            cnt++;
        } else {
            if(cnt == 0) {
                continue;
            } else {
                cnt-=1;
            }
        }
    }
    cout << cnt;
}