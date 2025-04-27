// Problem Link - https://codeforces.com/contest/2091/problem/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, inp;
    cin >> t;
    
    while(t--){
        bool poss = false;
        int ans(0);
        map<int, int> mp;
        cin >> n;

        for (int i = 0; i < n; i++){
            cin >> inp;
            mp[inp]++;
            if (mp[0] >= 3 && mp[1] >= 1 && mp[2] >= 2 && mp[3] >= 1 && mp[5] >= 1 && !poss) {
                poss = true;
                ans = i + 1;
            }
        }

        cout << ans << "\n";
    }
}