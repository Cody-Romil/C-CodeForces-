// Problem Link - https://codeforces.com/contest/2103/problem/B

#include <bits/stdc++.h>
using namespace std;

pair<int, int> calculate_cost(int n, string s){
    char cur('0');
    int ans(0), changes(0);
    pair<int, int> p;

    for (int i = 0; i < n; i++) {
        if (s[i] == cur) ans++;
        else {
            ans += 2;
            changes++;
            cur = s[i];
        }
    }
    p = {ans, changes};
    return p;
}

int main() {
    int t, n;
    string s;

    cin >> t;

    while(t--){
        pair<int, int> ans;
        cin >> n >> s;
        ans = calculate_cost(n, s);
        
        if (ans.second >= 3) cout << ans.first - 2 << "\n";
        else if (ans.second == 2) cout << ans.first - 1 << "\n";
        else cout << ans.first << "\n";
    }
}
