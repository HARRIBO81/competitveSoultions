//
// Created by ryan_javid on 2021-05-25.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    char beads[n + 1];
    strcpy(beads, b.c_str());
    int cnt = 0;
    for (int i = 0; i < n-1; i++) {
        if(beads[i] != beads[i+1])
        {
            cnt++;
        }
    }
    if(cnt > 2)
    {
        cout << "FIX YOUR BEADS!";
    }
    else
    {
        cout << "Organized";
    }
}