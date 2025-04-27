// Problem link - https://codeforces.com/contest/2085/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, inp;
    cin >> t;

    while(t--){
        int count(0), size;
        bool has_zero = false;
        vector<int> v;
        vector<pair<int, int>> operations;
        cin >> n;
        size = n;

        for(int i = 0; i < n; i++){
           cin >> inp;
           if (inp == 0) count++;
           v.push_back(inp);
        }

        if (count == 0) cout << "1\n1" << " " << n << "\n";
        else {
            if (v[0] == 0 || v[1] == 0) {
                operations.push_back({1, 2});
                size -= 1;
            }
            for (int i = 2; i < n; i++) if (v[i] == 0) has_zero = true;
            if (has_zero) {
                operations.push_back({2, size});
                size -= size - 2;
            }
            operations.push_back({1, size});
            cout << operations.size() << "\n";
            for(int i = 0; i < operations.size(); i++) cout << operations[i].first << " " << operations[i].second << "\n";
        }

    }
}