//
// Created by ryan javid on 2021-11-07.
//

#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main() {
    cin >> n >> a >> b;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(i%2==0) {
            cnt += b;
        } else {
            cnt += a;
        }
    }
    cout << cnt;
}
