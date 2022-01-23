//
// Created by ryan javid on 2021-05-22.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for(int j = 0; j < s.length(); j++)
        {
            if(s[j] == 'a' || s[j] == 'A')
            {
                if(j == s.length()-1)
                {
                    cout << "Hi!";
                }
                else
                {
                    cout << "Hi! ";
                }
            }
            if(s[j] == 'e' || s[j] == 'E')
            {
                if(j == s.length()-1)
                {
                    cout << "Bye!";
                }
                else
                {
                    cout << "Bye! ";
                }
            }
            if(s[j] == 'i' || s[j] == 'I')
            {
                if(j == s.length()-1)
                {
                    cout << "How are you?";
                }
                else
                {
                    cout << "How are you? ";

                }
            }
            if(s[j] == 'o' || s[j] == 'O')
            {
                if(j == s.length()-1)
                {
                    cout << "Follow me!";
                }
                else
                {
                    cout << "Follow me! ";
                }
            }
            if(s[j] == 'u' || s[j] == 'U')
            {
                if(j == s.length()-1)
                {
                    cout << "Help!";
                }
                else
                {
                    cout << "Help! ";
                }
            }
            if(isdigit(s[j]))
            {
                if(j == s.length()-1)
                {
                    cout << "Yes!";
                }
                else {
                    cout << "Yes! ";
                }
            }
        }

        cout << endl;
    }




}