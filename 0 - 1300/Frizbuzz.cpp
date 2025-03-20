// Problem Link - https://codeforces.com/problemset/problem/2070/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        if (n >= 0 && n <= 2) cout << (n + 1) << "\n";
        else{
            if (n % 15 >= 3) cout << (int) (floor(n/15) + 1) * 3 << "\n";
            else cout << (int) (floor(n/15) + 1) * 3 - (2 - (n % 15)) << "\n";
        }
    }
}