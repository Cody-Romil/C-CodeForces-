// Problem Link - https://codeforces.com/contest/2106/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;

    while(t--){
        cin >> n >> x;

        for (int i = 0; i < n; i++) {
            if (i != x) cout << i << " ";
        }
        if (n != x) cout << x << "\n";
        else cout << "\n";
    }
}