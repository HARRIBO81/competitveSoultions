//
// Created by ryan javid on 2021-06-23.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a; string b;
    cin >> a; cin >> b;
    int cnt = 0;

    if(a == b) {
        cout << "Yes";
        return 0;
    }

    if(b.size() != (a.size()-1)) {
        cout << "No";
        return 0;
    }

    else {
        for(int i = 0; i < a.length(); i++) {
            if(a[i] == b[i]) {
                cnt++;
            }
            else {
                break;
            }
        }
        for(int i = a.length()-1; i >= 0; i--) {
            if(a[i] == b[i-1]) {
                cnt++;
            }
            else {
                break;
            }
        }
        if(cnt >= b.length()) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No" << endl;
}