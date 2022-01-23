//
// Created by ryan javid on 2021-08-21.
//

#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, k;
vector<char> v;
vector<vector<char>> perms;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c >> d >> k;
    for(int i = 0; i < a; i++) {
        v.push_back('A');
    }
    for(int i = 0; i < b; i++) {
        v.push_back('B');
    }
    for(int i = 0; i < c; i++) {
        v.push_back('C');
    }
    for(int i = 0; i < d; i++) {
        v.push_back('D');
    }
    do {
        perms.push_back(v);
    } while (next_permutation(v.begin(), v.end()));
    for(auto i : perms[k-1]) {
        cout << i;
    }
}