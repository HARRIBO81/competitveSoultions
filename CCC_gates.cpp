//
// Created by ryan javid on 2021-10-17.
//

#include <bits/stdc++.h>
using namespace std;

int g, p, x;
set<int> gates;
int main() {
    cin >> g >> p;
    for(int i = 1; i <= g; i++) {
        gates.insert(i);
    }
    for(int i = 1; i <= p; i++) {
        cin >> x;
        auto it = gates.upper_bound(x);
        if(it == gates.begin()) {
            cout << i-1 << endl;
            return 0;
        }
        it--; gates.erase(it);
    }
    cout << p << endl;
}
