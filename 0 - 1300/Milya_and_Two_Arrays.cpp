// Problem Link - https://codeforces.com/problemset/problem/2059/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> a(n), b(n);
        set<int> s, sa, sb;

        for (int i = 0; i < n; i++) cin >> a[i], sa.insert(a[i]);
        for (int i = 0; i < n; i++) cin >> b[i], sb.insert(b[i]);
        sort(a.begin(), a.end());


        if (sa.size() >= 3 || sb.size() >= 3) cout << "YES\n";
        else {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            bool possa = false, possb = false;
            for(int i = 0; i < n - 1; i++) if (a[i] < a[i + 1]) possa = true;
            for(int i = 0; i < n - 1; i++) if (b[i] < b[i + 1]) possb = true;
            if (possa && possb) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}