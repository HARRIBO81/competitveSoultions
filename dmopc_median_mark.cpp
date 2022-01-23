//
// Created by  ryan javid on 2021-05-27.
//
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int grades[1000];
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        grades[i] = x;
    }
    sort(grades,grades+n);
    int hi = n/2;
    int lo = (n/2)-1;
    if(n%2==1)
    {
        cout << grades[hi];
    }
    else{
        int final = round((grades[hi] + grades[lo])/2.0);
        cout << final;
    }




}