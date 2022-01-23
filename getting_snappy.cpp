//
// Created by ryan javid on 2021-06-04.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long n; long m;
    cin >> n; cin >> m;
    long best = LONG_MAX;
    long answer = 0;
    while(true)
    {
        if(n == 0)
        {
            cout << answer << endl;
            return 0;
        }
        if(abs(m-n) <= best)
        {
            best = abs(m-n);
            answer = n;
        }
        n = floor(n/2);
    }
}