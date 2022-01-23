//
// Created by ryan javid on 2021-05-23.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int weights[3];
    int one; int two; int three;
    cin >> one; cin >> two; cin >> three;
    weights[0] = one; weights[1] = two; weights[2] = three;
    sort(weights, weights+3);
    cout << weights[2] - weights[0];
}