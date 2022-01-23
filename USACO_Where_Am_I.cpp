//
// Created by ryan javid on 2021-09-21.
//

#include <bits/stdc++.h>
using namespace std;
int n;
string seq;


bool test(int k, string s) {
    set<string> uni;
    for(int i = 0; i <= n-k+1; i++) {
        string substring = s.substr(i, k);
        if(uni.count(substring) != 0) {
            return false;
        }
        uni.insert(substring);
    }
    return true;
}

int main() {
    int fink = 0;
    cin >> n;
    cin >> seq;
    for(int k = 1; k <= n+1; k++) {
        if(test(k,seq)) {
            fink = k;
            break;
        }
    }
    cout << fink;
}
