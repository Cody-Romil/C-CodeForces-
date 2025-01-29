// Problem Link - https://codeforces.com/problemset/problem/275/A

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

    int arr[3][3];
    int ini_arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    for(int i = 0; i <= 2; i++){
       for(int j = 0; j <= 2; j++){
          cin >> arr[i][j];
          arr[i][j] = (arr[i][j] % 2 == 0)?0:1;
          if (arr[i][j] == 1){
            ini_arr[i][j] = !ini_arr[i][j];
            if (i > 0){
               ini_arr[i - 1][j] = !ini_arr[i - 1][j];
            }
            if (i < 2){
               ini_arr[i + 1][j] = !ini_arr[i + 1][j];
            }
            if (j > 0){
               ini_arr[i][j - 1] = !ini_arr[i][j - 1];
            }
            if (j < 2){
               ini_arr[i][j + 1] = !ini_arr[i][j + 1];
            }
          }
       }
    }

    for(int i = 0; i <= 2; i++){
       for(int j = 0; j <= 2; j++){
          cout << ini_arr[i][j];
       }
       cout << "\n";
    }
}