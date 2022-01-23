//
// Created by ryan javid on 2021-08-19.
//

#include <bits/stdc++.h>
using namespace std;
int n, q, l, r, diffrence[500001], co[500001], co2[500000];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int array[500000];
    cin >> n >> q;
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    diffrence[0] = array[0];
    for(int i = 1; i < n; i++) {
        diffrence[i] = array[i] - array[i - 1];
    }
    copy(array, array+500000, co2);
    copy(diffrence, diffrence+500001, co);
    for(int i = 0; i < q; i++) {
        cin >> l >> r;
        diffrence[l-1] += (-100);
        diffrence[r] -= (-100);
        for(int j = 0; j < n; j++) {
            if(j == 0) {
                array[j] = diffrence[j];
            } else {
                array[j] = diffrence[j] + array[j - 1];
            }
        }
        int max = *max_element(array, array+n);
        cout << max << " " << count(array, array+n, max) << "\n";
        copy(co, co+500001, diffrence);
        copy(co2, co2+500000, array);
    }
}
