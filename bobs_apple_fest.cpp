//
// Created by ryan javid on 2021-06-28.
//

#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long x; long y;
    cin >> x; cin >> y;
    long GCD = x; long n = y;
    while(GCD != n)
    {
        if(GCD > n)
            GCD -= n;
        else
            n -= GCD;
    }

    int lcm = (x*y)/GCD;
    cout << lcm;
}