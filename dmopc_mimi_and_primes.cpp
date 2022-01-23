//
// Created by ryan javid on 2021-10-31.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n; ll g = 0, ans, x;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        g = __gcd(g,x);
    }
    if(g == 1) {
        cout << "DNE" << endl;
        return 0;
    }
    for(ll i = 2; i * i <= g; i++) {
        while(g % i == 0)  {
            ans = max(ans, i);
            g /= i;
        }
    }
    ans = max(ans, g);
    cout << ans << endl;
}

