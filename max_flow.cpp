//
// Created by ryan javid on 2021-05-21.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int max = 0;
        for(int j = 0; j < n; j++)
        {
            int f; cin >> f;
            if(f > max){
                max = f;
            }
        }
        cout << max << endl;
    }
}
