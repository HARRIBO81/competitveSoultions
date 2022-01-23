//
// Created by ryan javid on 2021-12-05.
//

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
const int MM = 2e5+5;
int n, p[MM], w[MM], d[MM], best;
vector<pi> vec;
int sum = 0;

long long f(int x) {
    long long cost = 0;
    for(int i = 0; i < n; i++) {
        if(x < p[i]-d[i]) cost += 1LL * (p[i]-d[i]-x) * w[i];
        if(x > p[i] + d[i]) cost += 1LL * (x - p[i] - d[i]) * w[i];
    }
    return cost;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p[i] >> w[i] >> d[i];
        vec.push_back({p[i]-d[i], w[i]});
        vec.push_back({p[i]+d[i], w[i]});
    }
    sort(vec.begin(), vec.end());
    for(pi i : vec) {
        sum += i.second;
        if(sum >= 0) {
            best = i.first;
        }
    }
    cout << f(best);
}