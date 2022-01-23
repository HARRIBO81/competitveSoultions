//
// Created by ryan javid on 2021-07-18.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1e5;
const long n, m, a[MM], sum = 0;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n; cin >> m;
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    for(int i = 0; i < n; i++) {
        long cur = m - a[i];
        auto next = lower_bound(a,a+n,cur) - a;
        if(next == n) {
            next = n-1;
        }
        if(next - i > 0) {
            sum += next - i;
        }
    }
    cout << sum;
}