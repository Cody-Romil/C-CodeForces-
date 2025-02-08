// Problem Link - https://codeforces.com/problemset/problem/133/A

#include <iostream>
using namespace std;

int main() {
    string s;
    char d[3] = {'H', 'Q', '9'};

    cin >> s;   

    for(int i = 0; i < 3; i++){
       for(int j = 0; j < s.length(); j++){
          if (s[j] == d[i]){
            cout << "YES";
            return 0;
          }
       }
    }

    cout << "NO";
}