// Problem Link - https://codeforces.com/problemset/problem/2078/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    double t, n, x, inp;
    cin >> t;

    while(t--){
        double sum(0);
        cin >> n >> x;

        for(int i = 0; i < n; i++) cin >> inp, sum += inp;

        if (sum / n == x) cout << "YES\n";
        else cout << "NO\n";
    }
}