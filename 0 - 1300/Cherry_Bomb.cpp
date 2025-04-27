// Problem Link - https://codeforces.com/contest/2106/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k;
    cin >> t;

    while(t--){
        bool poss = true;
        int target_sum = 0;
        cin >> n >> k;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (b[n - 1] != -1) {
            int target_sum = a[n - 1] + b[n - 1];
            for (int i = 0; i < n; i++) if (target_sum - a[i] > k || (b[i] != -1 && b[i] != target_sum - a[i])) poss = false;
            if (poss) cout << "1\n";
            else cout << "0\n"; 

        }
        else {
            cout << a[0] + k - a[n - 1] + 1 << "\n";
        }
    }
}