//
// Created by ryan javid on 2021-09-22.
//

#include <bits/stdc++.h>
using namespace std;
vector<string> combos;
vector<pair<string,string>> rules;
int n;
string s;
vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};

int main() {
    stable_sort(cows.begin(), cows.end());
    cin >> n;
    for(int i = 0; i < n; i++) {
        pair<string,string> r;
        for(int j = 0; j < 6; j++) {
            cin >> s;
            if(j == 0) {
                r.first = s;
            }
            else if(j == 5) {
                r.second = s;
            }
        }
        rules.push_back(r);
    }
    do {
        bool works = true;
        for(const auto& j : rules) {
            string one = j.first;
            string two = j.second;
            int ind1 = 0;
            int ind2 = 0;
            for(int I = 0; I < cows.size(); I++) {
                if(cows[I] == one) {
                    ind1 = I;
                }
                if(cows[I] == two) {
                    ind2 = I;
                }
            }
            if(abs(ind1 - ind2) != 1) {
                works = false;
            }
        }
        if(works) {
            for(const auto& i : cows) {
                cout << i << endl;
            }
            return 0;
        }

    } while(next_permutation(cows.begin(), cows.end()));
}