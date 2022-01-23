//
// Created by ryan javid on 2021-06-17.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int heads; int legs;
    cin >> heads; cin >> legs;
    int cnt = 0;

    for(int i = 0; i <= heads; i++)
    {
        for(int j = 0; j <= heads; j++)
        {
            bool c1 = (i+j == heads);
            bool c2 = (2 * i + 4 * j == legs);

            if(c1 && c2)
            {
                cnt++;
            }
            else
            {
                continue;
            }

        }
    }

    if(cnt > 0)
    {
        cout << "Yes";
    } else {
        cout << "No";
    }

}