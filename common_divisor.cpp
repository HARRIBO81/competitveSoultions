//
// Created by ryan javid on 2021-10-10.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL a, b, k;
int main() {
    cin >> a >> b >> k;
    LL g = __gcd(a,b), limit = (LL) sqrt(g);
    vector<LL> factors;
    for(int i = 1; i <= limit; i++) {
        if(g % i == 0) {
            factors.push_back(i);
            if(g/i != i) factors.push_back(g/i);
        }
    }
    sort(factors.begin(), factors.end(), greater<LL>());

    if(k > factors.size()) {
        cout << "-1";
    } else {
        cout << factors[k-1];
    }
}