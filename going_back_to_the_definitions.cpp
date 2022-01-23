//
// Created by ryan javid on 2021-08-07.
//

#include <bits/stdc++.h>
using namespace std;
const int n;
string x;
vector<string> vec;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end(), [] (string x, string y) {
        return x+y > y+x;
    });
    for(int i = 0; i < n; i++) {
        cout << vec[i];
    }
}