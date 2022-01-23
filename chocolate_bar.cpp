//
// Created by ryan javid on 2021-06-09.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; int y;
        cin >> x; cin >> y;
        cout << (x*y)-1 << endl;
    }
}