//
// Created by ryan javid on 2021-06-05.
//

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

bool check(string array[])
{
    unordered_map<string,int> freq;
    for(int i=0;i<4;i++){
        freq[array[i]]++;
    }

    if(freq.size()==1)
    {
        return true;
    }
    else
    {
        return false;

    }
}


string last(string s)
{
    if(s.find(' ') < s.length())
    {
        int i = s.find_last_of( ' ' );
        return s.substr(i+1, s.size());
    }
    else
    {
        return s;
    }


}
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        string syllables[4];
        for (int j = 0; j < 4; j++) {
            string s;
            getline(cin, s);
            string last_word = last(s);
            reverse(last_word.begin(), last_word.end());
            transform(last_word.begin(), last_word.end(), last_word.begin(), ::tolower);
            for (int x = 0; x < last_word.size(); x++) {

                if(x == last_word.size() && last_word[x] != 'a' || last_word[x] != 'e' || last_word[x] != 'i' || last_word[x] != 'o' || last_word[x] != 'u')
                {
                    syllables[j] = last_word;
                }

                if (last_word[x] == 'a' || last_word[x] == 'e' || last_word[x] == 'i' || last_word[x] == 'o' || last_word[x] == 'u') {
                    syllables[j] = last_word.substr(0, x+1);
                    break;
                }

            }
        }
        if(check(syllables))
        {
            cout << "perfect" << endl;
        }
        else if(syllables[0] == syllables[1] && syllables[2] == syllables[3])
        {
            cout << "even" << endl;
        }
        else if(syllables[0] == syllables[2] && syllables[1] == syllables[3])
        {
            cout << "cross" << endl;
        }
        else if(syllables[0] == syllables[3] && syllables[1] == syllables[2])
        {
            cout << "shell" << endl;
        }
        else
        {
            cout << "free" << endl;
        }
    }
}
