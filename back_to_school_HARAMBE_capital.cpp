//
// Created by ryan javid on 2021-05-24.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int current = 0;
    string replacements[100];
    for(int i = 0; i < n; i++)
    {
        string x; cin >> x;
        replacements[i] = x;
    }
    string orginal;
    cin >> orginal;
    string x;
    for(int i = 0; i < n; i++)
    {
        if(replacements[i].length() >= current && replacements[i].length() <= orginal.length())
        {
            current = (int)replacements[i].length();
            x = replacements[i];
        }
    }
    cout << x;
}