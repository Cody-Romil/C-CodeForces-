// Problem Link - https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans(-1), customers(0);
    cin >> n;

    vector<int> arrival(n), departure(n);
    for (int i = 0; i < n; i++) cin >> arrival[i] >> departure[i];

    for(int i = 1; i < n; i++){
        if (arrival[i] < departure[i - 1]) customers++;
        ans = max(customers, ans);
    }
    cout << ans << "\n";
}