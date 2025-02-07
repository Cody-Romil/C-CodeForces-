// Problem Link - https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    set<char> se;

    cin >> s;

    for(int i = 0; i < s.length(); i++){
       se.insert(s[i]);
    }
    if (se.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}