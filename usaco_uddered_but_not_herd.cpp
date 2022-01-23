//
// Created by ryan javid on 2021-08-07.
//

#include <bits/stdc++.h>
using namespace std;
string cow, heard;
int main() {
    int cnt = 0;
    cin >> cow >> heard;
    while(heard.size() != 0) {
        for(int i = 0; i < 26; i++) {
            if(heard[0] == cow[i]) {
                heard.erase(0,1);
            }
        }
        cnt++;
    }
    cout << cnt;
}