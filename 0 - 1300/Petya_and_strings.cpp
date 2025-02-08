// Problem Link - https://codeforces.com/problemset/problem/112/A

#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    bool equal = false;

    cin >> s1 >> s2;

    for(int i = 0; i < s1.length(); i++){
       s1[i] = tolower(s1[i]);
       s2[i] = tolower(s2[i]);
    }

    cout << s1.compare(s2);
}