// Problem Link - https://codeforces.com/contest/450/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m, input;
   cin >> n >> m;

   queue<pair<int, int>> q;
   pair<int, int> p;

   for(int i = 0; i < n; i++){
      cin >> input;
      q.push({input, i + 1});
   }

   while(q.size() != 1){
      q.front().first = q.front().first - m;
      if (q.front().first <= 0){
         q.pop();
      }
      else{
         p = q.front();
         q.pop();
         q.push(p);
      }
   }
   
   cout << q.front().second << "\n";
}