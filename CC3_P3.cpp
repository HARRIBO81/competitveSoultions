//
// Created by ryan javid on 2021-08-21.
//

#include <bits/stdc++.h>
#define ull unsigned long long;
using namespace std;
unsigned long long fac(unsigned long long n)
{
    const unsigned long long M = 1000000007;
    unsigned long long f = 1;
    for (unsigned long long i = 2; i <= n; i++)
        f = (f*i)%M;
    return f;
}
unsigned long long n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    n = fac(n);
    unsigned long long cnt = 0;
    for (unsigned long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
            else {
                cnt+=2;
            }
        }
    }
    cout << cnt;
}