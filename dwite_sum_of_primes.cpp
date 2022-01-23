//
// Created by ryan javid on 2021-06-24.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static bool prime[100001];
void sieve() {
    for(int i = 2; i*i <=100001; i++){
        if(prime[i]) {
            for(int j = i*i; j <= 100001; j+=i) {
                prime[j] = false;
            }
        }
    }
}


int main() {
    memset(prime,true,sizeof(prime));
    sieve();
    for(int i = 0; i < 5; i++) {
        int n; cin >> n;
        int sum = 0;
        for(int j = 2; j <= n; j++) {
            if(prime[j]) {
                sum+=j;
            }
        }
        cout << sum << endl;
    }
}