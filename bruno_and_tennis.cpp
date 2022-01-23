//
// Created by ryan javid on 2021-05-25.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string notBruno[1000];
    string possiblyBruno[1000];
    int error = 0;
    int lob = 0;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (i % 2 == 0) {
            notBruno[i] = command;
        } else {
            possiblyBruno[i] = command;
        }
    }
    for (int i = 0; i < n; i++) {
        if (notBruno[i] == "lob") {
            lob++;
        }
        if (notBruno[i] == "lob" && possiblyBruno[i + 1] != "lob") {
            error++;
        }
        if (notBruno[i] != "lob" && possiblyBruno[i + 1] == "lob") {
            error++;
        }
    }
    if (lob == 0) {
        cout << "Not enough information";
    } else {
        if (error == 0) {
            cout << "Possible Bruno";
        } else {
            cout << "BruNO";
        }
    }
}