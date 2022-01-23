//
// Created by ryan javid on 2021-09-17.
//

#include<bits/stdc++.h>
using namespace std;
string one, two;
long v1, v2;
long pow(int x, int n, int mod) {
    if(n == 0) {
        return 1;
    }
    int t = pow(x,n/2,mod);
    t = t*t % mod;
    if(n%2==0) return t;
    return t*x % mod;
}


int main() {
    cin >> one >> two;
    transform(one.begin(), one.end(), one.begin(),
              [](unsigned char c){ return std::tolower(c); });
    transform(two.begin(), two.end(), two.begin(),
              [](unsigned char c){ return std::tolower(c); });




    for(long long i = 0; i < one.length(); i++) {
        long long a = one[i] - 96;
        v1 += pow(a,i+1, 10);
    }
    for(long long i = 0; i < two.length(); i++) {
        long long a = two[i] - 96;
        v2 += pow(a,i+1, 10);
    }
    v1 %=10;
    v2 %=10;
    if(v1 == 0) {
        v1+=10;
    }
    if(v2 == 0) {
        v2+=10;
    }
    cout << v1+v2;
}
