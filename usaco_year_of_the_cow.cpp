//
// Created by ryan javid on 2021-08-13.
//

#include <bits/stdc++.h>
using namespace std;
map<string, int> name;
map<string, int> zodiac;
string animals[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
int main() {
    int n;
    for(int i = 0; i < 12; i++) {
        zodiac[animals[i]] = i;
    }
    cin >> n;
    name["Bessie"] = 0;
        for(int I = 0; I < n; I++) {
            string namea, nameb, direction, year;
            cin >> namea;
            for(int i = 0; i < 3; i++) {
                cin >> direction;
            }
            cin >> year;
            for(int i = 0; i < 3; i++) {
                cin >> nameb;
            }
//            cout << namea << " " << nameb << " " << direction << " " << year;
        int first = zodiac[year];
        int second = name[nameb];
        if(direction == "next") {
            if(first == ((12000 + second) % 12)) {
                name[namea] = second + 12 * 1;
            }
            else {
                if(first > ((12000 + second) % 12)) {
                    name[namea] = second + first - ((12000 + second) % 12);
                } else {
                    name[namea] = second + first - ((12000 + second) % 12) + 12;
                }
            }
        } else {
            if(first == ((12000 + second) % 12)) {
                name[namea] = second + 12 * (-1);
            }
            else {
                if(first > (12000 + second) % 12) {
                    name[namea] = second + first - ((12000 + second) % 12) - 12;
                } else {
                    name[namea] = second + first - ((12000 + second) % 12);
                }
            }
        }
    }
    cout << abs(name["Elsie"]);
}