//
// Created by ryan javid on 2021-05-29.
// THIS IS NOT A DMOJ PROBLEM
// THIS IS JUST A WAY TO TEST FUNCTIONS OUT!
//

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <stack>
using namespace std;
//hash set
unordered_set<int> s;
//tree set
set<int> s1;

// CLASS
class student {
public:
    string name;
    int age;
    student() {};
    student(string Name, int Age) {
        name = Name; age = Age;
    };
    bool operator<(const student & x) const {
        return name < x.name;
    }
};

// CUSTOM compartor
bool cmp(student x, student y) {
    if(x.age != y.age) return x.age < y.age;
    return x.name < y.name;
}


//hashmap
unordered_map<string, int> mp;
int main() {
    mp["hello"] = 5;
    mp["java"] = 4;
    for(pair<string, int> x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    // OBJECT
    student a("Ryan", 19);
    student b("Adam", 19);
    student c("Connor", 18);
    //OBJECT ARRAY
    vector<student> vec = {a,b,c};
    sort(vec.begin(), vec.end(), cmp);
    for(student i : vec) {
        cout << i.name << " " << i.age << endl;
    }



    //STACK LIFO
    stack<int> st;
    st.push(2);
    st.size();
    st.top();
    st.pop(); // LAST IN FIRST OUT

    //QUEUE
    queue<int> q;
    q.push(1);
    q.push(4);
    q.front();
    q.back();
    q.size();
    q.empty();
    q.pop(); // FIRST IN FIRST OUT

    //DEQUE DOUBLE ENDED QUEUE
    deque<int> dq;
    dq.push_front(2);
    dq.push_back(3);
    dq.front();
    dq.back();
    dq.size();
    dq.empty();
    dq.pop_back(); // POP LAST
    dq.pop_front();
}
