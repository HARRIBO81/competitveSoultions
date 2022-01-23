//
// Created by ryan javid on 2021-05-25.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int cnt = 0;
    if(s[s.length()-1] == '2')
    {
        cnt++;
    }
    for(int i = 0; i < s.length()-1; i++)
    {
        if(s[i] == '2' && s[i+1] != '5')
        {
            cnt++;
        }
    }
    cout << cnt;
}