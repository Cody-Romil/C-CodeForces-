// Problem Link - https://codeforces.com/contest/2060/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, inp;
    cin >> t;

    while(t--){
        bool poss = true;
        cin >> n >> m;
        vector<pair<int, int>> ans;

        for(int i = 1; i <= n; i++){
            vector<int> v;
            for (int j = 0; j < m; j++){
                cin >> inp;
                v.push_back(inp);
            }
            sort(v.begin(), v.end());

            for(int z = 0; z < m - 1; z++) if (v[z + 1] - v[z] != n) poss = false;
            
            if (poss) ans.push_back({*min_element(v.begin(), v.end()), i});
        }
        
        if (poss){
            sort(ans.begin(), ans.end());
            for (int i = 0; i < n; i++) cout << ans[i].second << " ";
            cout << "\n";
        }
        else cout << "-1\n";
    }
}