// Problem link - https://cses.fi/problemset/task/1092/

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, tSum(0);
   vector<int> a, b, s1, s2;
   cin >> n;
   tSum = n*(n + 1)/2;

   if (tSum % 2 == 0){
      cout << "YES" << "\n";
      for(int i = 1; i <= n; i++){
         if (n % 2 != 0 && i == (n + 1)/2){
            continue;
         }
         else if (i <= n/2){
            a.push_back(i);
         }
         else{
            b.push_back(i);
         }
      }

      for(int i = 0; i < a.size(); i++){
         if (i % 2 == 0){
            s1.push_back(a[i]);
            s2.push_back(b[i]);
         }
         else{
            s1.push_back(b[i]);
            s2.push_back(a[i]);
         }
      }

      if (n % 2 != 0){
         s1.push_back((n + 1)/2);
      }

      // Generate Output
      cout << s1.size() << "\n";
      for(int i = 0; i < s1.size(); i++){
         cout << s1[i] << " ";
      }
      cout << "\n" << s2.size() << "\n";
      for(int i = 0; i < s2.size(); i++){
         cout << s2[i] << " ";
      }
   }
   else{
      cout << "NO";
   }
}