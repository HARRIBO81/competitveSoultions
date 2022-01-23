//
// Created by ryan javid on 2021-11-13.
//

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull n, ans;
int main() {
    cin >> n;
    for(ull i = 1; i <= n; i*=100) {
        if(i*10 >= n) ans += n - i + 1;
        else ans += 9*i;
    }
    cout << ans;



}