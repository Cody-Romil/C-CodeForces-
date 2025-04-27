// Problem Link - https://codeforces.com/problemset/problem/2060/A

#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> v){
    int output(0);

    for(int i = 0; i < 3; i++) if (v[i] + v[i + 1] == v[i + 2]) output++;
    return output;
}

int main() {
    int t, inp;
    cin >> t;

    while(t--){
        vector<int> v, v2, v3;
        for(int i = 1; i <= 5; i++){
            if (i == 3) {
                v.push_back(v[i - 3] + v[i - 2]);
                v2.push_back(0);
            }
            else {
             cin >> inp;
             v.push_back(inp);
             v2.push_back(inp);
            }
        }
        for(int i = 0; i < 5; i++){
           if (i == 2) {
            v3.push_back(v[i + 1] - v[i - 1]);
           }
           else v3.push_back(v[i]);
        }

        cout << max(max(solve(v), solve(v2)), solve(v3)) << "\n";
    }
}