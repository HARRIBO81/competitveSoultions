//
// Created by ryan javid on 2021-06-24.
// NOT SOLVED
//

#include <iostream>
#include <cmath>
using namespace std;
int factorCount(const int arr[], int n, int k)
{
    int cnt = 0;
    for (int i = 1; i < sqrt(n); i++) {
        if (k % arr[i] == 0)
            cnt++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int array[n];
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        array[i] = x;
    }

    for(int i = 0 ; i < n; i++) {
        cout << factorCount(array,n,array[i]) << endl;
    }

}