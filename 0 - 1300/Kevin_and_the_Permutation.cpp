// Problem Link - https://codeforces.com/problemset/problem/2048/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int l = 1, r = n, j = 1;
        
        while(j <= n){
            if (j % k == 0) cout << l++ << " ";
            else cout << r-- << " ";
            j++;
        }
        cout << "\n";
    }
}