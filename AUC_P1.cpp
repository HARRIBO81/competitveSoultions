//
// Created by ryan javid on 2021-08-25.
//

#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n, b, s, g;
int main() {
    cin >> n >> b >> s >> g;
    LL sum = (b * 1) + (s * 3) + (g * 5);
    if(sum >= n) {
        cout << "0";
        return 0;
    }
    double dif = (n - sum);
    cout << ceil(dif / 5.0);
}