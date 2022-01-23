//
// Created by ryan javid on 2021-07-17.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n;
int main() {
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++) {
        int I; cin >> I; array[i] = I;
    }
    sort(array, array + sizeof(array) / sizeof(array[0]));
    int low = n/2;
    int high = (n/2) + 1;
    if(n%2 == 0)
    {
        low-=1; high-=1;
    }
    for(int i =0 ; i < n; i++) {
        if(i % 2 == 0) {
            cout << array[low] << " ";
            low-=1;
        }
        else {
            cout << array[high] << " ";
            high+=1;
        }
    }
}
