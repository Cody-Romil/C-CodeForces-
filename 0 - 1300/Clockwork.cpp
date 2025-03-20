// Problem Link - https://codeforces.com/problemset/problem/2062/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, inp;
    cin >> t;

    while(t--){
        bool poss = true;
        cin >> n;

        for(int i = 1; i <= n; i++){
           cin >> inp;
           if (inp <= 2 * max(i - 1, n - i)) poss = false;
        }

        if (poss) cout << "YES\n";
        else cout << "NO\n";
    }
}