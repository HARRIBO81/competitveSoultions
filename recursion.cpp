//
// Created by ryan javid on 2021-09-12.
//

#include <bits/stdc++.h>
using namespace std;
// 4 Fundamental rules

// 1. base case: always have at least one case that can be solved without recursion
// 2. Make Progress: Any recursive call must progress towards a base case.
// 3. Always believe: Always assume the recursive call works.


// f(x) = 2 *f(x-1) + x*x

int fact(int n)
{
    if (n <= 1)
        return n;
    return n * fact(n - 1);
}
int gcd(int m, int n)
{
    if (m == 0) {
        return n;
    }
    return gcd(n % m,m);
}


// COMBINATIONS

int n = 3;
// {] {1} {2} {3} {1,2}, {1,3} {2,3}, {1,2,3}
// 2^n comobs
vector<int> combos;
void comboGen(int i, int n, vector<int> &combos) {
    if(i > n) {
        for(auto i : combos) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    comboGen(i+1, n, combos); // dont choose i
    combos.push_back(i); // CHOOSING i
    comboGen(i+1,n,combos); // choose i
    combos.pop_back();
}

// practise, sum of n numbers
int sum(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n + sum(n-1);
    }
}

int all_paths(int n, int m) {
    if(n == 1 || m == 1) {
        return 1;
    }
    else {
        return all_paths(n-1, m) + all_paths(n, m-1);
    }
}



int main() {
    cout << all_paths(2,4);
}