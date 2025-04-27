// Problem Link - https://codeforces.com/problemset/problem/2060/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        vector<int> v(n);
        int l = 0, r = n - 1, ans = 0;

        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        while(l < r) {
            int sum = v[l] + v[r];
            if (sum == k) ans++, l++, r--;
            else if (sum < k) l++;
            else r--;
        }

        cout << ans << "\n";
    }
}