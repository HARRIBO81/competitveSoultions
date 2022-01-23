//
// Created by ryan javid on 2021-08-19.
//

#include <bits/stdc++.h>
using namespace std;
long difference[1000000];
long psa[10000000];
long s, f, n;
int main() {
    cin >> n;
    int max_f = 0;
    for(int i = 0; i < n; i++) {
        cin >> s >> f;
        difference[s]+=1;
        difference[f]-=1;
        if(f > max_f) {
            max_f = f;
        }
    }
    psa[0] = difference[0];
    for(int i = 0; i <= 1000000; i++) {
        psa[i+1] = psa[i] + difference[i];
    }
    long max = -100000;
    for(int i = 0; i <= 1000000; i++) {
        if(psa[i] > max) {
            max = psa[i];
        }
    }
    cout << max;
}