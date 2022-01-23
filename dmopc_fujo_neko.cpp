//
// Created by ryan javid on 2021-07-10.
//

#include <iostream>
using namespace std;
int r; int c; int q;
int rows[1200];
int cols[1200];
string s;
int main() {
     cin >> r; cin >> c; int ci; int ri;
    for(int i = 0; i < r; i++) {
        cin >> s;
        for(int j = 0; j < c; j++) {
            if(s.at(j) == 'X') {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
     cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> ci; cin >> ri;
        if(cols[ci-1] == 1 || rows[ri-1] == 1) {
            cout << "Y";
        }
        else {
            cout << "N";
        }
        cout << "\n";
    }


}