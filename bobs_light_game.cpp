//
// Created by ryan javid on 2021-08-18.
//

#include<bits/stdc++.h>
using namespace std;
long n, m, l, r, cnt;
int main() {
    int array[1000005];
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> l >> r;
        if(array[l] == 1) {
            array[l] = 0;
        } else {
            array[l] = 1;
        }
        if(array[r+1] == 1) {
            array[r+1] = 0;
        } else {
            array[r+1] = 1;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(array[i] == array[i-1]) {
            array[i] = 0;
        } else {
            array[i] = 1;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(array[i] == 1) {
            cnt++;
        }
    }
    cout << cnt;
}