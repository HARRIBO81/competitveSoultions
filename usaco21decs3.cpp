//
// Created by ryan javid on 2022-01-16.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e5;
int n, m, freqa[MM], freqb[MM];
ll dif[MM];
int main() {
    cin >> n >> m;
    for(int i = 1, a, b; i <= n; i++) {
        cin >> a >> b;
        freqa[a]++; freqb[b]++;
    }
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= m; j++) {
            dif[i+j] += (ll)freqa[i] * freqa[j];
            dif[i+j+1] -= (ll)freqb[i]*freqb[j];
        }
    }
    for(int i = 0; i <=2*m ;i++) {
        cout << dif[i] << endl;
        dif[i+1]+=dif[i];
    }

}