// Problem Link - https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, mi_i, ma_i;
    c = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }

    for(int i = n - 1; i >= 0; i--){
       if (arr[i] == *min_element(arr, arr + n)){
        mi_i = i;
        break;
       }
    }

    for(int i = 0; i < n; i++){
       if (arr[i] == *max_element(arr, arr + n)){
        ma_i = i;
        break;
       }
    }

    c = ma_i + (n - 1 - mi_i);
    if (ma_i > mi_i){
        c--;
    }

    cout << c;
}