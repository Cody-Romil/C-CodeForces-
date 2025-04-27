// Problem Link - https://codeforces.com/contest/2091/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, inp;
    cin >> t;

    while(t--){
        long long count(0), team_size(0), min_item(1e18);
        vector<long long> v;
        cin >> n >> x;

        for(int i = 0; i < n; i++) {
            cin >> inp;
            v.push_back(inp);
        }
        sort(v.rbegin(), v.rend());

        for(int i = 0; i < n; i++){
            team_size++;
            min_item = min(min_item, v[i]);

            if ((team_size * min_item) >= x) {
                count++;
                team_size = 0;
                min_item = 1e18;
            }
        }
        cout << count << "\n";
    }
}