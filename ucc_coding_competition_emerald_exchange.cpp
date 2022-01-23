//
// Created by ryan javid on 2021-05-25.
//

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int pointer = 0;
    int emeralds[100000];
    vector<int> sequences;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        emeralds[i] = x;
    }
    emeralds[n] = 1;
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        if(emeralds[i] % 2 == 1)
        {
            for(int j = pointer; j < i; j++)
            {
                sum += emeralds[j];
            }
            sequences.push_back(sum);
            pointer = i+1;
            sum = 0;
        }
    }
    int answer = *max_element(sequences.begin(), sequences.end());
    cout << answer;
}