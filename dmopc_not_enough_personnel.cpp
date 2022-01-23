//
// Created by ryan javid on 2021-07-24.
//

#include <bits/stdc++.h>
using namespace std;
const int n, q;
int main(){
    cin >> n;
    vector<string> name(n);
    vector<int> skill(n);
    for(int i = 0; i < n; i++) {
        cin >> name[i] >> skill[i];
    }
    cin >> q;
    for(int i = 1, x, d; i <= q; i++) {
        cin >> x >> d;
        int minum = INT_MAX; string answer = "";
        for(int j = 0; j < n; j++) {
            if(skill[j] >= x && skill[j] <= x+d) {
                if(skill[j] - x < minum) {
                    minum = skill[j] - x; answer = name[j];
                }
            }
        }
        if(minum == INT_MAX) {
            cout << "No suitable teacher!" << endl;
        }
        else {
            cout << answer << endl;
        }
    }



}