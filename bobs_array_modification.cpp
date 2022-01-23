//
// Created by ryan javid on 2021-06-23.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long n; cin >> n;
    long cnt = 0;
    long last_element = 0;
    for(long i = 0; i < n; i++) {
        long x; cin >> x;
        if(x <= last_element) {
            cnt += (last_element+1) - x;
            last_element = (x + ((last_element+1) - x));
        }
        else {
            last_element = x;
        }

    }
    cout << cnt;
}