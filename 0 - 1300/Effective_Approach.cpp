// Problem Link - https://codeforces.com/problemset/problem/227/B

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int fort = 0;
   int forward = 0;
   int backward = 0;
   int n, m;

   cin >> n;
   vector<long> a(n);
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }

   cin >> m;
   vector<long> b(n);
   for(int i = 0; i < m; i++){
      cin >> b[i];
   }

   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         if (b[i] == a[j]){
            fort++;
            break;
         }
         fort++;
      }
      forward += fort;
      backward += n - (fort - 1);
      fort = 0;
   }
   cout << forward << " " << backward;
}