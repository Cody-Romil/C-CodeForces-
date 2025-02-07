// Problem Link - https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

int main() {
    int n, len;
    cin >> n;

    string wrd, wrd_arr[n];

    for(int i = 0; i < n; i++){
       cin >> wrd;
       if (wrd.length() > 10){
        len = wrd.length() - 2;
        wrd_arr[i] = wrd[0] + to_string(len) + wrd[wrd.length() - 1];
       }
       else{
        wrd_arr[i] = wrd;
       }
    }

    for(int i = 0; i < n; i++){
       cout << wrd_arr[i] << "\n";
    }
}