//
// Created by ryan javid on 2021-12-19.
//

#include <bits/stdc++.h>
using namespace std;
const int MM = 1000;
int n, level1[MM], level2[MM], level3[MM];
int main() {
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        cin >> level1[i];
    }
    for(int i = 0 ; i < n; i++) {
        cin >> level2[i];
    }
    for(int i = 0 ; i < n; i++) {
        cin >> level3[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k <n ;k++) {
                if((level1[i] < level2[j]) && (level1[i] < level3[k]) && (level2[j] < level3[k])) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

}
