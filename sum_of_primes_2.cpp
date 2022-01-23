//
// Created by ryan javid on 2021-06-25.
//

#include <iostream>
#include <math.h>
using namespace std;

static int dp[1000009];
void sieve() {
    int sum = 0;
    int array[1000009]; array[0] = 1; array[1] = 1;
    for(int i = 2; i <= sqrt(1000009); i++){
        if(array[i] == 0) {
            for(int j = i*i; j <= 1000009; j+=i) {
                array[j] = 1;
            }
        }
    }
    for(int i = 1; i <= 1000009; i++) {
        if(array[i] == 0) {
            sum+=i;
        }
        dp[i] = sum;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int a; int b; cin >> a; cin >> b;
        cout << dp[b] - dp[a - 1] << endl;
    }
}
