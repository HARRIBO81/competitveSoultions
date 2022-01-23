//
// Created by ryan javid on 2021-12-19.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MM = 1e5+5;
LL n, a[MM];
int main() {
    memset(a,0,sizeof a);
    cin >> n;
    for(LL i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(LL i = 0; i < n; i++) {
        LL ignore = a[i];
        LL sum = 0;
        LL cur = 0;
        for(LL j = 0; j < n; j++) {
            if(a[j] == ignore) {
                continue;
            } else {
                sum += abs(cur - a[j]);
                cur = a[j];
            }
        }
        sum += abs(cur - 0);
        cout << sum << endl;
    }
}