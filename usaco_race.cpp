//
// Created by ryan javid on 2021-09-29.
//

#include <bits/stdc++.h>
using namespace std;
vector<int> combos;
int n, k, x;


int main() {
    cin >> k >> n;
    for (int I = 0; I < n; I++) {
        cin >> x;
        int speed = 1, inc = 0, dec = 0, time = 0;
        while (true) {
            inc += speed;
            time++;
            if (inc + dec >= k) break;
            if (speed >= x) {
                dec += speed;
                time++;
                if (inc + dec >= k) {
                    break;
                }
            }
            speed++;
        }
        cout << time << endl;
    }
}