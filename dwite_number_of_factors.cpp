//
// Created by ryan javid on 2021-07-16.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n;
int factors()
{
    int cnt = 0;
    for (int i=2;i<= sqrt(n);i++)
    {
        while(n%i == 0) {
            cnt++;
            n /= i;
        }
    }
    cnt += n > 1;
    return cnt;
}
int main() {
    for(int i = 0; i < 5; i++) {
        cin >> n;
        int x = factors();
        if(x == 1) {
            cout << 0 << endl;
        }
        else {
            cout << x << endl;
         }
    }
}