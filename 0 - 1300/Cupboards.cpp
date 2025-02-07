// Problem Link - https://codeforces.com/problemset/problem/248/A

#include <iostream>
using namespace std;

int main() {
    int n, c_l, c_r, t;

    t = 0;
    c_l = 0;
    c_r = 0;
    cin >> n;

    int l[n], r[n];

    for(int i = 0; i < n; i++){
       cin >> l[i] >> r[i];
       if (l[i] == 0){
        c_l--;
       }
       else{
        c_l++;
       }
       if (r[i] == 0){
        c_r--;
       }
       else{
        c_r++;
       }
    }

    for(int i = 0; i < n; i++){
       if (c_l <= 0){
        if (l[i] == 1){
            t++;
        }
       }
       else {
        if (l[i] == 0){
            t++;
        }
       }
       if (c_r <= 0){
        if (r[i] == 1){
            t++;
        }
       }
       else{
        if (r[i] == 0){
            t++;
        }
       }
    }

    cout << t;
}