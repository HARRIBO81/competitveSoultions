//
// Created by ryan javid on 2021-08-08.
//

#include <bits/stdc++.h>
using namespace std;
string op, s, combo, k;
stack<string> st;
int main() {
    while(true) {
        getline(cin, op);
        if(op == "0") {
            break;
        }
        for(int i = op.size() - 1; i >= 0; i--) {
            if(isdigit(op[i])) {
                s.push_back(op[i]);
                st.push(s + " ");
                s.clear();
            }
            else if(op[i] != ' ') {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                k.push_back(op[i]);
                combo = a + b + k;
                st.push(combo + " ");
                k.clear();
            }
        }
        cout << st.top() << endl;
        st=stack<string>();

    }
}