//
// Created by ryan javid on 2021-05-21.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        string command; cin >> command;
        if(command == "Rock")
        {
            cout << "Paper" << endl;
        }
        else if(command == "Scissors")
        {
            cout << "Rock" << endl;
        }
        else if(command == "Paper")
        {
            cout << "Scissors" << endl;
        }
        else if(command == "Fox")
        {
            cout << "Foxen" << endl;
        }
        else if(command == "Foxen")
        {
            return 0;
        }
    }

}