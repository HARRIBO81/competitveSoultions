//
// Created by ryan javid on 2021-06-13.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double sum = 0;
    int n; cin >> n;
    double bases[n+1];
    for(int i = 0; i < n+1; i++)
    {
        double x; cin >> x;
        bases[i] = x;
    }
    for(int i = 0; i < n; i++)
    {
        double y; cin >> y;
        double area = y * (bases[i] + bases[i+1])/2;
        sum += area;
    }
    cout << fixed << sum;
}
