//
// Created by ryan javid on 2021-06-28.
//
#include <iostream>
#include <cstring>
using namespace std;

static bool prime[999999];
void sieve() {
    for(int i = 2; i*i <=999999; i++){
        if(prime[i]) {
            for(int j = i*i; j <= 999999; j+=i) {
                prime[j] = false;
            }
        }
    }
}

bool is_pal(int n) {
    int rev=0,val;
    val = n;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(val==rev)
        return true;
    else
        return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(prime,true,sizeof(prime));
    sieve();
    for(int I = 0; I < 5; I++) {
        int l; int u;
        cin >> l >> u;
        int cnt = 0;
        for(int i = l; i <= u; i++) {
            if(prime[i] && is_pal(i)) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}