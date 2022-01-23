//
// Created by ryan javid on 2021-05-27.
//

#include <iostream>
#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main() {
    int n; cin >> n;
    char square[50][50];
    bool latinRows = false;
    bool latinColumns = false;
    bool reduced = false;
    char firstRow[50]; char firstColumn[50];
    for(int i = 0; i < n; i++) {
        string line; cin >> line;
        for(int j = 0; j < line.length(); j++) {
            square[i][j] = line[j];
        }
    }
    for(int i = 0; i < n; i++) {
        unordered_set<char> rows;
        unordered_set<char> columns;
        for(int j = 0; j < n; j++) {
            rows.insert(square[i][j]);
            columns.insert(square[j][i]);
        }
        if(rows.size() == n) {
            latinRows = true;
        }
        else {
            latinRows = false;
            break;
        }
        if(columns.size() == n) {
            latinColumns = true;
        }
        else {
            latinColumns = false;
            break;
        }
        rows.clear();
        columns.clear();
    }
    for(int i = 0; i < n; i++) {
        firstRow[i] = square[0][i];
        firstColumn[i] = square[i][0];
    }
    if(is_sorted(firstRow, firstRow + n) && is_sorted(firstColumn, firstColumn + n)) {
        reduced = true;
    }

    if(latinRows && latinColumns) {
        if(reduced) {
            cout << "Reduced" << endl;
        }
        else {
            cout << "Latin" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }
}