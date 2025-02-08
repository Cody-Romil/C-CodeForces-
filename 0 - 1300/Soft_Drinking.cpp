// Problem Link - https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int arr[3] = {(k*l)/nl, c*d, p/np};
    cout << floor(*min_element(arr, arr + 3)/n);
}