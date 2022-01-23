//
// Created by ryan javid on 2021-08-24.
//

#include <bits/stdc++.h>
using namespace std;
string s, t;
char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main() {
    cin >> s >> t;
    int cnt = -1;
    string newS;
    while(true) {
        if(newS.find(t) != string::npos) {
            cout << cnt << endl;
            cout << newS << endl;
            return 0;
        }
        else {
            newS = "";
            cnt++;
        }
        for(int i = 0; i < s.size(); i++) {
            int cur = s[i] - 97;
            if(cur-cnt < 0) {
                newS += alphabet[26 - abs(cur-cnt)];
            }
            else {
                newS += alphabet[cur-cnt];
            }
        }

    }
}