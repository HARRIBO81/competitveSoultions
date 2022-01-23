//
// Created by user on 2021-10-02.
//

#include <bits/stdc++.h>
using namespace std;
int n, y;
bool isPerm(int a[n]) {
    for(int i = 0; i < n; i++) {
        if(count(a, a+n, a[i]) > 1) {
            return false;
        }
        else {
            continue;
        }
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int b[n-1];
    int a[n];
    for(int i = 0; i < n-1; i++) {
        cin >> b[i];
    }

    for(int first = 1; first < b[0]; first++) {
        a[0] = first;
        for(int i = 1; i < n; i++) {
            a[i] = b[i-1] - a[i-1];
        }
        for(int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        if(isPerm(a)) {
            for(int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
        }
    }

}