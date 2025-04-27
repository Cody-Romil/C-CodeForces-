// Problem Link - https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, ans(0), single;
    cin >> n >> x;
    single = n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);

    int l = 0, r = n - 1;
    while(l < r) {
        int sum = arr[l] + arr[r];
        if (sum <= x) ans++, l++, r--, single -= 2;
        else r--;
    }
    cout << ans + single << "\n";
}