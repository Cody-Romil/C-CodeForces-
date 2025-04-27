// Problem Link - https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, inp;
    cin >> n >> m;

    multiset<int> tickets;

    for(int i = 0; i < n; i++) cin >> inp, tickets.insert(inp);
    for(int i = 0; i < m; i++) {
        cin >> inp;
        auto it = tickets.upper_bound(inp);
        if (it == tickets.begin()) cout << "-1\n";
        else {
            cout << *(--it) << "\n";
            tickets.erase(it);
        }
    }
    
}