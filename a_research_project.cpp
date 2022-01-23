//
// Created by ryan javid on 2021-05-21.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int g; cin >> g;
    for(int i = 0; i < g; i++)
    {
        int n; cin >> n;
        int min = 100;
        int max = 0;

        for(int j = 0; j < n; j++)
        {
            int a; cin >> a;
            if(a < min)
            {
                min = a;
            }
            if(a > max)
            {
                max = a;
            }
        }
        cout << min << " " << max << endl;
    }
}