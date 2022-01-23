//
// Created by ryan javid on 2021-06-17.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x; int n;
    cin >> x; cin >> n;
    int array[n];
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int q; cin >> q;
        array[i] = q;
    }
    sort(array,array + n);
    while(true)
    {
        if(!binary_search(array, array + n, x + cnt) && !binary_search(array, array + n, x - cnt)) {
            cout << x - cnt << endl;
            return 0;
        } else if (!binary_search(array,array+n, x + cnt) && binary_search(array,array+n,x-cnt)) {
            cout << x + cnt << endl;
            return 0;
        } else if(binary_search(array,array+n,x+cnt) && !binary_search(array,array+n,x-cnt)) {
            cout << x - cnt << endl;
            return 0;
        } else {
            cnt++;
        }
    }


}