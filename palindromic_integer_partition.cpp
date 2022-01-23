//
// Created by ryan javid on 2021-10-02.
//

#include <bits/stdc++.h>
using namespace std;
long long memo[100];
long long f(int n) {
    if(memo[n] > 0) return memo[n];
    if(n <= 1) {
        return memo[n] = 1;
    }
    long long x = 1;
    for(int i = 1; i <= n/2; i++) {
        x += f(n-2 * i);
    }
    return memo[n] = x;
}

int main() {
    long long n;
    cin >> n;
    cout << f(n);
}