// Problem Link - https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans(1);
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 0; i < n - 1; i++) if (arr[i] != arr[i + 1]) ans++;
    cout << ans << "\n";
}