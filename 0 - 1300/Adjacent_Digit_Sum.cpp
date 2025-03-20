// Problem Link - https://codeforces.com/problemset/problem/2067/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        if (x + 1 >= y && (x + 1 - y) % 9 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}