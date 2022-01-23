//
// Created by ryan javid on 2021-12-20.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
char c;
ll ans = 0;
string s;
void fun(vector<int> list) {
    for(int i = 1; i+1 < list.size(); i++) {
        int left = list[i] - list[i-1], right = list[i+1] - list[i];
        ans += (ll) left*right-1;
        if(left > 1) ans--;
        if(right > 1) ans--;
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c;
        s.push_back(c);
    }
    vector<int> g, h;
    g.push_back(0), h.push_back(0);
    for(int i = 1; i<=n;i++) {
        if(s[i] == 'G') {
            g.push_back(i);
        } else {
            h.push_back(i);
        }
    }
    g.push_back(n+1), h.push_back(n+1);
    fun(g); fun(h);
    cout << ans;
}