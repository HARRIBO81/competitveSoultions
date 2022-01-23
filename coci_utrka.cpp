//
// Created by ryan javid on 2021-10-14.
//

#include <bits/stdc++.h>
using namespace std;
map<string, int> namesValues;
int n;
string s;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        namesValues[s]+=1;
    }
    for(int i = 0; i < n-1; i++) {
        cin >> s;
        namesValues[s]-=1;
    }
    for(auto I : namesValues) {
        if(I.second != 0) {
            cout << I.first;
        }
    }
}
