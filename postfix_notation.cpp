//
// Created by ryan javid on 2021-06-28.
//

#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;
bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

int main() {
    stack<double> letters;
    string operation;
    getline(cin, operation);
    vector<string> result;
    istringstream iss(operation);
    for(string s; iss >> s; )
    {
        result.push_back(s);
    }
    for(int i = 0; i < result.size(); i++) {
        if(isNumber(result.at(i))) {
            letters.push(stod(result.at(i)));
        }
        else {
            double x = letters.top();
            letters.pop();
            double y = letters.top();
            letters.pop();
            if(result.at(i) == "*") letters.push(x*y);
            else if(result.at(i) == "/") letters.push(y/x);
            else if(result.at(i) == "+") letters.push(x+y);
            else if(result.at(i) == "-") letters.push(y-x);
            else if(result.at(i) == "%") letters.push(fmod(x,y));
            else letters.push(pow(x,y));
        }
    }
    cout << fixed << setprecision(1) << letters.top();

}