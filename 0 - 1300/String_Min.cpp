// Problem Link - https://codeforces.com/problemset/problem/2062/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        cout << count(s.begin(), s.end(), '1') << "\n";
    }
}