//
// Created by ryan javid on 2021-06-04.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum = 0;
    string s;
    while(getline(cin, s))
    {
        if(s == "No more numbers.")
        {
            cout << sum;
            return 0;
        }
        if(s == "one")
        {
            sum += 1;
        }
        if(s == "two")
        {
            sum += 2;
        }
        if(s == "three")
        {
            sum += 3;
        }
        if(s == "four")
        {
            sum += 4;
        }
        if(s == "five")
        {
            sum += 5;
        }
        if(s == "six")
        {
            sum += 6;
        }
        if(s == "seven")
        {
            sum += 7;
        }
        if(s == "eight")
        {
            sum += 8;
        }
        if(s == "nine")
        {
            sum += 9;
        }
    }


}