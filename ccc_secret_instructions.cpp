//
// Created by ryan javid on 2021-07-04.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string previous;
    while(true) {
        string s; cin >> s;
        if(s == "99999") {
            return 0;
        }
        int array[5];
        for(int i = 0; i < 5; i++) {
            array[i] = s[i] - '0';
        }
        int first, second; first = array[0], second = array[1];
        if((first + second) % 2 == 1) {
            cout << "left" << " " << array[2] << array[3] << array[4] << endl;
            previous = "left";
        }
        else if((first + second) % 2 == 0 && (first + second) != 0) {
            cout << "right" << " " << array[2] << array[3] << array[4] << endl;
            previous = "right";
        }
        else if((first + second) == 0) {
            cout << previous << " " << array[2] << array[3] << array[4] << endl;
        }


    }



}