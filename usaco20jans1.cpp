//
// Created by ryan javid on 2021-12-05.
//

#include <bits/stdc++.h>
using namespace std;

int n, k;
int main() {
    cin >> n >> k;
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int ans = 0;
    for(int x = 1; x <= 1000; x++) {
        int cnt = 0; vector<int> rem;
        for(int i = 0; i < n; i++) {
            cnt += b[i]/x;
            rem.push_back(b[i]%x);
        }
        if(cnt <= k/2) {
            break;
        }
        if(cnt >= k) {
            ans = max(ans,k/2*x);
        } else {
            int val = (cnt-k/2)*x;
            sort(rem.begin(), rem.end(), greater<int>());
            for(int i = 0; i < k-cnt && i< rem.size(); i++) {
                val += rem[i];
            }
            ans = max(ans, val);
        }
    }
    cout << ans << endl;
}