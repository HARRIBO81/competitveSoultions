//
// Created by ryan javid on 2021-10-02.
//

#include <bits/stdc++.h>
using namespace std;
int x, n, k;
stack<string> all_combos;
int main() {
    cin >> x;
    for(int i = 0; i < x; i++) {
        cin >> n >> k;
        vector<int> patterns;
        for(int j = 1; j <= n; j++) {
            if (j <= n - k) {
                patterns.push_back(0);
            } else {
                patterns.push_back(1);
            }
        }
        cout << "The bit patterns are" << endl;
        do {
            string s;
            for(auto I : patterns) {
                s+= to_string(I);
            }
            all_combos.push(s);
            } while(next_permutation(patterns.begin(), patterns.end()));
        while(!all_combos.empty()) {
            cout << all_combos.top() << endl;
            all_combos.pop();
        }
        cout << endl;
    }
}