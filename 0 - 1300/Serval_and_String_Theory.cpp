// Problem Link - https://codeforces.com/contest/2085/problem/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    while(t--){
        string s, r;
        bool poss = false, poss2 = false;
        cin >> n >> k >> s;

        for(int i = n - 1; i >= 0; i--) r += s[i];

        if (n == 1) cout << "NO\n";
        else if (s.compare(r) < 0 || (k >= 1 && *min_element(s.begin(), s.end()) != *max_element(s.begin(), s.end()))) cout << "YES\n";
        else cout << "NO\n";
    }
}