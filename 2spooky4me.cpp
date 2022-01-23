//
// Created by ryan javid on 2021-06-30.
// NOT SOLVED
//

#include <iostream>
#include <deque>
using namespace std;
 deque<long> d;
int main() {
    long n; long l; long s; long sum = 0;
    cin >> n; cin >> l; cin >> s;
    for(int i = 0; i < l+1; i++) {
        d.push_back(0);
    }
    for(int i = 0; i < n; i++) {
        int a; int b; int val;
        cin >> a; cin >> b; cin >> val;
        d[a] += val;
        d[b+1] -= val;
    }
    for(int i = 0; i < l; i++)
    {
        if(i == 0)
        {
            continue;
        }
        else{
            d[i] = d[i-1] + d[i];
        }
    }
    for(int i = 0; i < l; i++) {
        if(d[i] < s) {sum++;}
    }
    cout << sum;
}