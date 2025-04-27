// Problem Link - https://codeforces.com/contest/2094/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m, l, r;
    cin >> t;

    while(t--){
        int i = 1, lh = 0, rh = 0;
        cin >> n >> m >> l >> r;

        while(i <= m){
            if (i % 2 == 0) lh-=1;
            else rh+=1;  
            i++;        
        }
        cout << lh << " " << rh << "\n";
    }
}