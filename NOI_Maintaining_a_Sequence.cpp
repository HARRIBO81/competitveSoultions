//
// Created by ryan javid on 2021-09-19.
//

#include <bits/stdc++.h>
using namespace std;
int n, m, x, posi, tot;
string op;
vector<int> seq;
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> x;
        seq.push_back(x);
    }
    for(int I = 0; I < m; I++) {
        cin >> op;
        if(op == "INSERT") {
            cin >> posi >> tot;
            for(int i = posi+1; i < (posi+tot)+1; i++) {
                cin >> x;
                seq.insert(seq.begin() + i, x);
            }
        }
        if(op == "DELETE") {
            cin >> posi >> tot;
            seq.erase(seq.begin() + posi-1, seq.begin() + (posi+tot)-1);
        }
        if(op == "MAKE-SAME") {
            cin >> posi >> tot >> x;
            for(int i = posi-1; i < (posi+tot)-1; i++) {
                seq[i] = x;
            }
        }
        if(op == "REVERSE") {
            cin >> posi >> tot;
            reverse(seq.begin() + posi-1, seq.begin() + (posi+tot)-1);
        }
        if(op == "GET-SUM") {
            cin >> posi >> tot;
            int sum = 0;
            for(int i = posi-1; i < (posi+tot)-1; i++) {
                sum+=seq[i];
            }
            cout << sum << endl;
        }
        if(op == "MAX-SUM") {
            int best = INT_MIN; int sum = INT_MIN;
            for(int i = 0; i <= n; i++) {
                sum = max(seq[i],sum+seq[i]);
                best = max(best, sum);
            }
            cout << best << endl;
        }
    }
}