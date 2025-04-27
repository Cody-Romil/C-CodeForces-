// Problem Link - https://codeforces.com/contest/2092/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string a, b;
    cin >> t;

    while(t--){
        bool h1 = true, h2 = true;
        string c(""), d("");
        cin >> n >> a >> b;

        if (count(a.begin(), a.end(), '0') == n) cout << "YES\n";
        else {
            for(int i = 0; i < n; i++){
                if (i % 2 == 0){
                    c += a[i];
                    d += b[i];
                }
                else {
                    c += b[i];
                    d += a[i];
                }
            }
    
            for(int i = 0; i < n - 1; i++){
                if (c[i] == c[i + 1]) h1 = false;
                if (d[i] == d[i + 1]) h2 = false;
            }
    
            if (h1 || h2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}