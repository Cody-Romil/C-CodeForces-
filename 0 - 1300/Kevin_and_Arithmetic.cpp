// Problem Link - https://codeforces.com/problemset/problem/2061/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, inp;
    cin >> t;

    while(t--){
        int odd(0), even(0);
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> inp;
            if (inp % 2) odd++;
            else even++;
        }

        if (even >= 1) cout << (odd + 1) << "\n";
        else cout << (odd - 1) << "\n";
    }
}