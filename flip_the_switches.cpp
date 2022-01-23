//
// Created by ryan javid on 2021-07-10.
//

#include <iostream>
using namespace std;
const int n;
string s;
int main() {
cin >> n;
cin >> s;
int cnt = 1;
if(s[n-1] == '0') {
    cnt--;
}
for(int i = 1; i < n; i++) {
    if(s.at(i) != s.at(i-1)) {
        cnt++;
    }
}
cout << cnt;
}