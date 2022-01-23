//
// Created by ryan javid on 2021-05-23.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int n; int m;
cin >> n; cin >> m;
int cnt = INT_MAX;
int index;
for(int i = 0; i < n; i++)
{
    int sum = 0;
    for(int j = 0; j < m; j++)
    {
        int a; cin >> a;
        if(a == 1 || a == 10)
        {
            sum+=1;
        }
    }
    if(sum < cnt)
    {
        cnt = sum;
        index = i;
    }
}
cout << index+1;
}