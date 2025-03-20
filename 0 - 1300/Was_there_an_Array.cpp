// Problem Link - https://codeforces.com/problemset/problem/2069/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, inp;
        vector<int> v = {};
        bool possible = true;
        cin >> n;

        for(int i = 0; i < (n - 2); i++){
           cin >> inp;
           if (inp == 1) v.push_back(i);
        }

        if (v.size() <= 1) cout << "YES" << "\n";
        else{
            for(int i = 0; i < v.size() - 1; i++){
                if (abs(v[i] - v[i + 1]) == 2){
                    possible = false;
                    break;
                }
            }
     
            if (possible) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
}