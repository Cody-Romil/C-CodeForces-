// Problem Link - https://codeforces.com/contest/2103/problem/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, n, inp;
    cin >> t;

    while(t--){
        cin >> n;
        set<int> s;

        for (int i = 1; i <= n; i++) cin >> inp, s.insert(inp);

        cout << s.size() << "\n";
    }
}