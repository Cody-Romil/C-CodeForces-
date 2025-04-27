// Problem Link - https://codeforces.com/contest/2091/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;

        if (n % 2 == 0) cout << "-1\n";
        else {
            for(int i = 1; i <= n; i+=2) cout << i << " ";
            for(int i = 2; i <= n; i+=2) cout << i << " ";
            cout << "\n";
        }
    }
}