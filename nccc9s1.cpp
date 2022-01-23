//
// Created by ryan javid on 2021-12-02.
//

// Not done this problem! Only 1/3 cases pass

#include <bits/stdc++.h>
using namespace std;

long long t, a, b, c;

int main() {
    cin >> t;
    for (long long i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (((a + (b * 2) + (c * 3)) % 2 != 0) || (a < c) || ((b % 2 != 0) && (a == 0))) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}