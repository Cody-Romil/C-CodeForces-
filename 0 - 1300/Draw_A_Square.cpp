// Problem Link - https://codeforces.com/problemset/problem/2074/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, l, r, d, u;
    cin >> t;

    while(t--){
        cin >> l >> r >> d >> u;

        if (l == r && l == d && l == u) cout << "YES\n";
        else cout << "NO\n";
    }
}