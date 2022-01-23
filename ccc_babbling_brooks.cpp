//
// Created by ryan javid on 2021-07-17.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int n; int y;
int main() {
cin >> n;
vector<double> v(n);
for(int i = 0; i < n; i++) {
    cin >> v[i];
}
while(true) {
    cin >> y;
    if(y == 77) {
        for(double I : v) {
            cout << (int)round(I) << " ";
        }
        return 0;
    }
    if(y == 99) {
        int pos; cin >> pos;
        pos-=1;
        double percent; cin >> percent;
        double left = v[pos] * percent / 100.0, right = v[pos] - left;
        v[pos] = left;
        v.insert(v.begin() + pos + 1, right);
    } if(y == 88) {
        int pos; cin >> pos;
        pos-=1;
        double left = v[pos], right = v[pos+1];
        v[pos] = left + right;
        v.erase(v.begin() + pos + 1);
    }
}



}