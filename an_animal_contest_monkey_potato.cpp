//
// Created by ryan javid on 2021-08-09.
//

#include <bits/stdc++.h>
using namespace std;
long k, d;
long a[10];
string ans = "";
int main() {
    cin >> k >> d;
    for(int i = 0; i < d; i++) {
        cin >> a[i];
    }
    long smallest = INT_MAX;
    for(int i = 0; i < d; i++) {
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }
    char smallest_char = '0' + smallest;
    long second_smallest = INT_MAX;
    for(int i = 0; i < d; i++) {
        if(a[i] < second_smallest && a[i] > smallest) {
            second_smallest = a[i];
        }
    }
    char secondSmallestChar = '0' + second_smallest;
    if(d == 1 && smallest == 0) {
        cout << "-1" << endl;
        return 0;
    }
    else if(smallest == 0) {
        if(k <= 2) {
            for(int i = 0; i < k; i++) {
                ans += secondSmallestChar;
            }
            cout << ans << endl;
            return 0;
        }
        else if(k > 2) {
            ans += secondSmallestChar;
            for(int i = 0; i < k-2; i++) {
                ans += '0';
            }
            ans += secondSmallestChar;
            cout << ans << endl;
            return 0;
        }
    }
    else if(smallest > 0) {
        for(int i = 0; i < k; i++) {
            ans += smallest_char;
        }
        cout << ans << endl;
        return 0;
    }
}