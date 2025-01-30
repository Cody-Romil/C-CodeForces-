// Problem Link - https://codeforces.com/problemset/problem/266/A

#include <iostream>
using namespace std;

int main() {
    int n, c;
    c = 0;
    string s;

    cin >> n >> s;

    if (n == 1 || n == 0){
        cout << 0;
        exit(0);
    }
    else{
        for(int i = 0; i < n-1; i++){
            if (s[i] == s[i + 1]){
                c++;
            }  
        }
    }
    cout << c;
}