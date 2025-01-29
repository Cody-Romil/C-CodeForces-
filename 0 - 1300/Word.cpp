// Problem Link - https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <cctype>
using namespace std;

string lower(string s){
    string n_s;
    for (int i = 0;i < s.length(); i++){
        n_s += tolower(s[i]);
    }
    return n_s;
}

string upper(string s){
    string n_s;
    for (int i = 0;i < s.length(); i++){
        n_s += toupper(s[i]);
    }
    return n_s;
}

int main() {
    int low_c = 0;
    int up_c = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (islower(s[i])){
            low_c++;
        }
        else{
            up_c++;
        }
    }
    if (up_c > low_c){
        cout << upper(s);
    }
    else if (low_c > up_c){
        cout << lower(s);
    }
    else{
       cout << lower(s);
    }
}