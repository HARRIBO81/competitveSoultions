//
// Created by ryan javid on 2021-07-10.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int b; int fi; int ei; int pi; int fail_n; int t; int cnt = 0;
int f[100000]; int e[100000]; int p[100000]; int fail[100000];
int main() {
    cin >> b;
    for(int i = 0; i < b; i++) {
        cin >> fi; cin >> ei; cin >> pi;
        f[i] = fi; e[i] = ei; p[i] = pi;
    }
    cin >> fail_n;
    for(int i = 0; i < fail_n; i++) {
        cin >> t;
        fail[i] = t;
    }
    sort(fail,fail+100000);
    for(int i = 0; i < b; i++) {
        auto lower = lower_bound(fail,fail+100000,f[i]) - fail;
        auto high = upper_bound(fail,fail+100000,e[i]) - fail;
        if(high-1 < lower) {cnt += p[i];}
    }
    cout << cnt << endl;


}