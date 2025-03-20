// Problem Link - https://codeforces.com/problemset/problem/139/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum(0);
    cin >> n;

    int arr[7];
    for(int i = 0; i < 7; i++){
        cin >> arr[i];
    }

    while(sum < n){
        for(int i = 0; i < 7; i++){
            sum += arr[i];
            if (sum >= n){
                cout << (i + 1) << "\n";
                break;
            }
        }
    }
}