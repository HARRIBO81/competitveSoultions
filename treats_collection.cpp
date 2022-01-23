//
// Created by ryan javid on 2021-12-19.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MM = 1e5;
int n, k, a[MM];
vector<int> street;

int main() {
    cin >> n >> k;
    for(int i = 0, a; i < n; i++) {
        cin >> a;
        street.push_back(a);
    }
    sort(street.begin(), street.end());
    int cnt = 0;
    int cur = 0;
    int candy = 0;
    vector<int> answers;
    do {
        for(auto i : street) {
            cnt += abs(cur - i);
            cur = i;
            candy++;
            if(candy == k){
                break;
            }
        }
        answers.push_back(cnt);
        cnt = 0;
    } while(next_permutation(street.begin(), street.end()));
    cout << *min(answers.begin(), answers.end());
}