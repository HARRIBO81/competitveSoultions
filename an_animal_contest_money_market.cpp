//
// Created by ryan javid on 2021-08-10.
//

#include <bits/stdc++.h>
using namespace std;
long n, x;
int main() {
    vector<char> commands;
    cin >> n;
    long array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array, array + n);
    if (n % 2 == 0) {
        for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
            if(i != (n/2)-1)
            {
                cout << array[i] << " " << array[j] << " ";
            }
            else {
                cout << array[i] << " " << array[j] << "\n";
            }
            commands.push_back('B');
            commands.push_back('S');
        }
        for(auto i : commands) {
            cout << i;
        }
        cout << "\n";
    } else {
        for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
            if (i == (n/2) - 1) {
                cout << array[i] << " " << array[i + 1] << " " << array[j] << "\n";
                commands.push_back('B');
                commands.push_back('E');
                commands.push_back('S');
            }
            else {
                cout << array[i] << " " << array[j] << " ";
                commands.push_back('B');
                commands.push_back('S');
            }
        }
        for(auto i : commands) {
            cout << i;
        }
        cout << "\n";
        }
    }