// Problem Link - https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, inp;
    unordered_map<int, int> mp;
    cin >> n;

    for(int i = 0; i < n - 1; i++) cin >> inp, mp[inp]++;
    for (int i = 1; i <= n; i++) if (mp[i] == 0) cout << i << "\n";
}