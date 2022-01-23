//
// Created by ryan javid on 2021-07-28.
//

#include <bits/stdc++.h>
using namespace std;
map<string, int> data;
const int n, t, power;
vector<int> v;
vector<string> names;
string name;
int main() {
    cin >> n >> t;
    for(int i = 0; i < n; i++) {
        cin >> name >> power;
        data.insert(pair<string,int>(name, power));
    }
    for(auto i : data) {
        v.push_back(i.second);
    }
    for(auto i : data) {
        names.push_back(i.first);
    }
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int q = j+1; q < n; q++) {
                if(v[i] + v[j] + v[q] <= t) {
                    cout << names[i] << " " << names[j] << " " << names[q] << endl;
                }
            }
        }
    }

}