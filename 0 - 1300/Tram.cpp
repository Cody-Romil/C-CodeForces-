// Problem Link - https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n], c[n];

    for(int i = 0; i < n; i++){
       cin >> a[i] >> b[i];
    }
    for(int i = 0; i < n; i++){
        if (i == 0){
            c[i] = -a[i] + b[i];
        }
        else{
            c[i] = c[i - 1] + b[i] - a[i];
        }
    }

    cout << *max_element(c, c + n);
}