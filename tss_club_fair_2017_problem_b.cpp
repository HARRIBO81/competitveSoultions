//
// Created by ryan javid on 2021-07-10.
//


#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int n; int q; int x; int y; int ra; vector<ll> houses;
int main() {
    cin >> n; cin >> q;
    for(int i = 0; i < n; i++) {
        cin >> x; cin >> y;
        houses.push_back((ll)x*x + (ll)y*y);
    }
    sort(houses.begin(),houses.end());
    for(int i = 0; i < q; i++) {
        cin >> ra;
        cout << upper_bound(houses.begin(),houses.end(),(ll)ra*(ll)ra) - houses.begin() << endl;
    }


}