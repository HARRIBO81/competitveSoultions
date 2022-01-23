//
// Created by ryan javid on 2021-09-18.
//

#include <bits/stdc++.h>
using namespace std;
string s;

bool monke(string s) {
    while(true) {
        int x = s.find("ANA");
        int y = s.find("BAS");
        if(x == string::npos && y == string::npos) {
            break;
        }
        while(x != string::npos){
            s.replace(x, 3, "A");
            x = s.find("ANA");
        }
        while(y != string::npos){
            s.replace(y, 3, "A");
            y = s.find("BAS");
        }
    }
    if(s == "A") {
        return true;
    } else  {
        return false;
    }

}

int main() {
    while(true) {
        cin >> s;
        if(s == "X") {
            break;
        }
        if(monke(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}