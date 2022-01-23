//
// Created by ryan javid on 2021-07-24.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for(int I = 0; I < 10; I++) {
        vector<int> a;
        int cnt = 0;
        int n; cin >> n;
        for(int i = 1, x; i <= n; i++) {
            cin >> x;
            a.push_back(x);
        }
        for(int i = n-1; i>=1; i--) {
            auto index = find(a.begin(), a.end(), i);
            auto next = find(a.begin(), a.end(), i+1);
            if(index > next) {
                cnt += index - a.begin();
                a.erase(index);
                a.insert(a.begin(), i);
            }
        }
        cout << cnt << endl;
    }
}