//
// Created by ryan javid on 2021-06-08.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    static int array[1000001];
    static int psa[1000001];
    int k; int n;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        int u; cin >> u;
        array[u] = 1;
    }
    psa[0] = 0;
    for(int i = 1; i <= 1000000; i++)
    {
        psa[i] = psa[i-1] + array[i];
    }
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int f; cin >> f;
        cout << f - psa[f] << endl;
    }

}

