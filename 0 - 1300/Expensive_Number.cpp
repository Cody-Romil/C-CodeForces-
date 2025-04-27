// Problem Link - https://codeforces.com/contest/2093/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;    
    cin >> t;

    while(t--){
        int ans(0);
        bool first_pos = false;
        cin >> s;

        for (int i = s.size() - 1; i >= 0; i--){
            if (s[i] == '0' && !first_pos) ans++;
            if (s[i] != '0' && first_pos) ans++;
            if (s[i] != '0') first_pos = true;
        }

        cout << ((ans == s.size())?(ans - 1):ans) << "\n";
    }
}