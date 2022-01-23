//
// Created by ryan javid on 2021-07-17.
//

#include <bits/stdc++.h>
using namespace std;
string s;
string final;
int main() {
    for(int I = 1; I <= 5; I++) {
        getline(cin, s); final = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '"') {
                int next = s.find("\"",i+1);
                final += " " + s.substr(i+1,next-i-1); i = next;
            } else if(s[i] == '\'') {
                int next = s.find("\'", i+1);
                final += " " + s.substr(i+1, next-i-1); i = next;
            } else if(s[i] == '/' && i+1 < s.length() && s[i+1] == '*') {
                int next = s.find("*/",i+2);
                final += " " + s.substr(i+2, next-i-2); i = next;
            } else if(s[i] == '/' && i+1 < s.length() && s[i+1] == '/') {
                final += " " + s.substr(i+2); i = s.length();
            }
        }
        cout << final.substr(1) << endl;

    }



}