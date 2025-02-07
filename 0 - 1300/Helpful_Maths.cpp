// Problem Link - https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = (s.length()/2) + 1;
    string d[n];
    int j = 0;

    for(int i = 0; i < n; i++, j+=2){
       d[i] = s[j];
    }
    sort(d, d + n);
    for(int i = 0; i < n; i++){
        if (i == n-1){
            cout << d[i];
        }
        else{
            cout << d[i] << "+";
        }
    }
}