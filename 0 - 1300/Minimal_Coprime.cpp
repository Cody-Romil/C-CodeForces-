// Problem Link - https://codeforces.com/problemset/problem/2063/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, l, r;
    cin >> t;

    while(t--){
        cin >> l >> r;

        if (l == 1 && r == 1) cout << "1\n";
        else cout << abs(r - l) << "\n";
    }
}