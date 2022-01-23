//
// Created by ryan javid on 2021-08-07.
//

#include <bits/stdc++.h>
using namespace std;
const int r, c, x, n, click;
vector<vector<int>> matrix;
vector<int> rows;
int main() {
    cin >> r >> c;
    for(int i = 0; i < r; i ++) {
        for(int j = 0; j < c; j++) {
            cin >> x;
            rows.push_back(x);
        }
        matrix.push_back(rows);
        rows.clear();
    }
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> click;
        stable_sort(matrix.begin(),matrix.end(),[](const vector<int>& x, const vector<int>& y) {
            return x[click-1] < y[click-1];});
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}