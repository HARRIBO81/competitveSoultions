//
// Created by ryan javid on 2021-11-07.
//

#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    int m = 1;
    cin >> n;
    while(m*(m-1)/2 < n) {
        m++;
    }
    if(m*(m-1)/2 != n) {
        cout << "No";
        return 0;
    } else {
        cout << "Yes" << endl;
        cout << m << endl;
        int edge = 0, adj[m+1][m+1];
        for(int i = 1; i <= m; i++) {
            for(int j = i+1; j <= m; j++) {
                edge++;
                adj[i][j] = adj[j][i] = edge;
            }
        }
        for(int i = 1; i <= m; i++) {
            cout << m-1 << " ";
            for(int j = 1; j <= m; j++) {
                if(i != j) {
                    cout << adj[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
}
