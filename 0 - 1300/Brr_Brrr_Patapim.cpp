// Problem Link - https://codeforces.com/contest/2094/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, inp;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> ans(2*n);

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> inp;
                ans[i + j] = inp;
            }
        }

        for(int i = 0; i < n; i++)
    }
}