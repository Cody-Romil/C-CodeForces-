// Problem Link - https://codeforces.com/contest/2106/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;

    while(t--){
        int count(0), ans(0);
        cin >> n >> s;

        for(int i = 0; i < n; i++) if (s[i] == '1') count++;

        for(int i = 0; i < n; i++){
            if (s[i] == '1') ans += count - 1;
            else ans += count + 1;
        }

        cout << ans << "\n";
    }
}