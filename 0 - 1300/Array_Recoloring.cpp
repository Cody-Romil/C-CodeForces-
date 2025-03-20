// Problem Link - https://codeforces.com/contest/2075/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        long long n, k, inp, max_item, sum(0);
        vector<long long> v;
        cin >> n >> k;

        for(int i = 0; i < n; i++){
           cin >> inp;
           v.push_back(inp);
        }

        if (k == 1 && n > 2) {
            max_item = *max_element(v.begin() + 1, v.end() - 1);
            sum += max(max(max_item + v[n - 1], max_item + v[0]), v[0] + v[n - 1]);
        }
        else{
            sort(v.rbegin(), v.rend());
            for(int i = 0; i <= k; i++) sum += v[i];
        }
        cout << sum << "\n";
    }
}