// Problem Link - https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int low_c = 0;
    int up_c = 0;
    string s, n_s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (islower(s[i])){
            low_c++;
        }
        else{
            up_c++;
        }
    }
    for(int i = 0; i < s.length(); i++){
       if (low_c > up_c || low_c == up_c){
        n_s += tolower(s[i]);
       }
       else{
        n_s += toupper(s[i]);
       }
    }

    cout << n_s;
}