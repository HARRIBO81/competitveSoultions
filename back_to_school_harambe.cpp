//
// Created by ryan javid on 2021-05-24.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; string t;
    int k; int cnt;
    getline(cin,s);
    getline(cin,t);
    cin >> k;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ' && t[i] != ' ')
        {
            cout << "No plagiarism";
            return 0;
        }
        if(t[i] == ' ' && s[i] != ' ')
        {
            cout << "No plagiarism";
            return 0;
        }

        if(s[i] != t[i])
        {
            cnt+=1;
        }
    }
    if(cnt <= k)
    {
        cout << "Plagiarized";
    }
    else
    {
        cout << "No plagiarism";
    }
}