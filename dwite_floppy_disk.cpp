//
// Created by ryan javid on 2021-06-28.
//

#include <iostream>
using namespace std;
static int target = 1440;
int backtracking(int i, int s, int n, const int array[]) {
    if(s > target) {
        return 0;
    }
    if(i == n) {
        return s;
    }
    int next = backtracking(i+1, s + array[i], n, array);
    int stay = backtracking(i+1, s, n, array);
    return max(next,stay);
}


int main() {
    for(int I = 0; I < 5; I++) {
        int n; cin >> n;
        int array[n];
        for(int i = 0; i < n; i++) {
            int val; cin >> val; array[i] = val;
        }
        cout << target - backtracking(0,0,n,array) << endl;
    }
}