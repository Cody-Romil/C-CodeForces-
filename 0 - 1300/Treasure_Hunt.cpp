// Problem Link - https://codeforces.com/contest/2090/problem/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, a;
    cin >> t;

    while(t--){
        cin >> x >> y >> a;

        if (a % (x + y) < x) cout << "NO\n";
        else cout << "YES\n";
    }
}