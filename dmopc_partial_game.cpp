//
// Created by ryan javid on 2021-09-15.
//

#include <bits/stdc++.h>
using namespace std;
long n, x;
int main() {
    long duke = 0; long alice = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x%2==0) {
            duke+=(x + 2 - 1) / 2;
        } else {
            alice+=(x + 2 - 1) / 2;
        }
    }
    if(duke > alice) {
        cout << "Duke" <<  "\n";
    } else {
        cout << "Alice" << "\n";
    }
}