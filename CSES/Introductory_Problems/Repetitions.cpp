// Problem Link - https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main() {
    int len(1), ans(-1);
    string s;
    cin >> s;

    if (s.size() == 1) cout << "1\n";
    else {
        for(long long i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) len++;
            else len = 1;
            ans = max(ans, len);
        }
    
        cout << ans << "\n";
    }
}