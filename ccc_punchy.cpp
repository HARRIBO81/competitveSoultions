//
// Created by ryan javid on 2021-05-22.
//

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    string s;
    int a = 0;
    int b = 0;
    while(getline(cin,s))
    {
        if(s[0] == '1')
        {
            if(s[2] == 'A')
            {
                a = stoi(s.substr(4, s.length()-1));
            }
            if(s[2] == 'B')
            {
                b = stoi(s.substr(4, s.length()-1));
            }
        }
        if(s[0] == '2')
        {
            if(s[2] == 'A')
            {
                cout << a << endl;
            }
            else
            {
                cout << b << endl;
            }
        }
        if(s[0] == '3')
        {
            if(s[2] == 'A')
            {
                if(s[4] == 'A')
                {
                    a = a+a;
                }
                else
                {
                    a = a+b;
                }
            }
            else
            {
                if(s[4] == 'B')
                {
                    b = b+b;
                }
                else
                {
                    b = a+b;
                }
            }
        }
        if(s[0] == '4')
        {
            if(s[2] == 'A')
            {
                if(s[4] == 'A')
                {
                    a = a*a;
                }
                else
                {
                    a = a*b;
                }
            }
            else
            {
                if(s[4] == 'B')
                {
                    b = b*b;
                }
                else
                {
                    b = a*b;
                }
            }
        }
        if(s[0] == '5')
        {
            if(s[2] == 'A')
            {
                if(s[4] == 'A')
                {
                    a = a-a;
                }
                else
                {
                    a = a-b;
                }
            }
            else
            {
                if(s[4] == 'B')
                {
                    b = b-b;
                }
                else
                {
                    b = b-a;
                }
            }
        }
        if(s[0] == '6')
        {
            if(s[2] == 'A')
            {
                if(s[4] == 'A')
                {
                    a = (int) a/a;
                }
                else
                {
                    a = (int) a/b;
                }
            }
            else
            {
                if(s[4] == 'B')
                {
                    b = (int) b/b;
                }
                else
                {
                    b = (int) b/a;
                }
            }
        }
        if(s[0] == '7')
        {
            return 0;
        }



    }
}