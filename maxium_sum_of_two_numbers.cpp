//
// Created by ryan javid on 2021-11-07.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<ll> array;
    ll n, m, x;
    cin >> n >> m;
    for(ll i = 0; i < n; i++) {
        cin >> x;
        array.push_back(x);
    }
    sort(array.begin(), array.end());
    ll i = 0, j = n-1, cnt = -1;
    while(i < j) {
        if(array[i] + array[j] > m) {
            j--;
        } else {
            cnt = max(cnt, array[i] + array[j]);
            i++;
        }
    }
    cout << cnt;

}