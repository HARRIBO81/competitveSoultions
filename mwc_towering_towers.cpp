//
// Created by ryan javid on 2021-08-09.
//

#include <bits/stdc++.h>
using namespace std;
int n, x;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    stack<pair<int,int>> st;
    st.push(pair<int,int>(0, 10000000));
    for(int i = 0; i < n; i++) {
        cin >> x;
        while(x >= st.top().second && !st.empty()) {
            st.pop();
        }
        cout << i - st.top().first << " ";
        st.push(pair<int,int>(i,x));
    }
}