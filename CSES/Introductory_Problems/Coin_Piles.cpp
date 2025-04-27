// Problem Link - https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;

int main() {
    long t, a, b;
    cin >> t;

    string ans[t];

    for(int i = 0; i < t; i++){
        cin >> a >> b;
        if (a == 0 && b == 0){
            ans[i] = "YES";
        }
        else if (a == 0 || b == 0){
            ans[i] = "NO";
        }
        else if (a > (b * 2) || b > (a * 2)){
            ans[i] = "NO";
        }
        else if ((a + b) % 3 == 0){
            ans[i] = "YES";
        }
        else{
            ans[i] = "NO";
        }
    }
    for(int i = 0; i < t; i++){
       cout << ans[i] << "\n";
    }
}