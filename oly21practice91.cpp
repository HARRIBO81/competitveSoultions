//
// Created by ryan javid on 2021-12-25.
//

#include <bits/stdc++.h>
using namespace std;
string s;
int u = 0, l = 0;
int main() {
    getline(cin, s);
    for(char i : s) {
        if(isalpha(i)) {
            if(isupper(i)) {
                u+=1;
            }
            if(islower(i)) {
                l+=1;
            }
        }
    }
    if(u == l) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}