// Problem Link - https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    string s;

    cin >> s1 >> s2 >> s3;

    if (s3.length() < (s1.length() + s2.length()) || s3.length() > (s1.length() + s2.length())){
        cout << "NO";
    }
    else{
        s = s1 + s2;
        sort(s.begin(), s.end());
        sort(s3.begin(), s3.end());
        if (s == s3){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }

}