//
// Created by ryan javid on 2021-08-18.
//

#include<bits/stdc++.h>
using namespace std;
int q, x, y, cnt;
string s;
int freq[100000][27];
int psa[1000001][27];
char findC;
int main() {
    getline(cin, s);
    for(int i = 0, j = 1; i < s.length(); i++, j++) {
        int a = s[i] - 97;
        if(a >= 0) {
            freq[j][a]+=1;
        }
    }
    for(int i = 0; i < 27; i++) {
        freq[0][i] = 0;
    }
    for(int j = 0; j < 27; j++) {
        bool counter = true;
        for(int i = 0; i <= s.length(); i++) {
            if(freq[i][j] != 0) {
                counter = false;
            }
            if(counter) {
                psa[i][j] = freq[i][j];
            } else {
                psa[i][j] = (psa[i-1][j] + freq[i][j]);
            }
        }
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> x >> y >> findC;
        int a = findC - 97;
        cout << psa[y][a] - psa[x-1][a] << endl;
    }
}
