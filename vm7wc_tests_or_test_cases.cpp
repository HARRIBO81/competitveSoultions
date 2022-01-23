//
// Created by ryan javid on 2021-09-24.
//

#include <bits/stdc++.h>
using namespace std;
int n, l, m, k;
char x, first;
vector<string> combos;
vector<vector<char>> rsets;
void getCombos(int index, string s) {
    if(index == n || s.length() == l) {
        cout << s << endl;
    }
    for(auto i : rsets[index]) {
        getCombos(index+1, s + x);
    }
}

int main()
{
    cin >> n >> l;
    for(int i = 0; i < n; i++) {
        vector<char> s;
        cin >> k;
        for(int j = 0; j < k; j++) {
            cin >> x;
            s.push_back(x);
        }
        rsets.push_back(s);
        if(i > 0) rsets[i].push_back(' ');
    }

    getCombos(0, "");





}
