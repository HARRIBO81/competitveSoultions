//
// Created by ryan javid on 2021-08-07.
//

#include <bits/stdc++.h>
using namespace std;
const long long n;
long long cows[12];
long long barns[12];
long long cnt = 1;
vector<long long> ans;
int main() {
    long long longcnt = 1;
    cin >> n;
    for(long long i = 0; i < n; i++) {
        cin >> cows[i];
    }
    for(long long i = 0; i < n; i++) {
        cin >> barns[i];
    }
    sort(cows, cows+n);
    sort(barns, barns+n);
    for(long long i = 0; i < n ; i++) {
        for(long long j = 0; j < n; j++) {
            if(cows[j] <= barns[i]) {
                ans[i]++;
            }
        }
    }
    for(int i = 0 ; i < n; i++) {
        cnt *= ans[i]-i;
    }
    cout << cnt;
}