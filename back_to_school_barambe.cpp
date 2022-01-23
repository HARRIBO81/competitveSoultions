//
// Created by ryan javid on 2021-05-23.
//

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    string s;
    string x;
    getline(cin, s);
    for(int i = 1; i < s.length(); i++)
    {
        if(isupper(s[i]) && s[i-2] !='.')
        {
            x = s.substr(0,i-1) + ". " + s.substr(i);
            s = x;
            x = "";

        }
    }

    if(s[s.length()-1] != '.')
    {
        s = s + '.';
    }

    cout << s;
}