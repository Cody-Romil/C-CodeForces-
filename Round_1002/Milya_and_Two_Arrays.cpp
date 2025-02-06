#include <iostream>
#include <set>
using namespace std;

int main() {
    int t, n, tmp;
    set<int> s;
    cin >> t;
    string si[t];

    for(int i = 0; i < t; i++){
       cin >> n;
       int a[n], b[n], c[n];
       for(int j = 0; j < n; j++){
        cin >> a[j];
       }
       for(int j = 0; j < n; j++){
        cin >> b[j];
       }
       for(int j = 0; j < n; j++){
        c[j] = a[j] + b[j];
        s.insert(c[j]);
       }
       if (s.size() >= 3){
        si[i] = "YES";
       }
       else{
        si[i] = "NO";
       }
       s = {};
    }

    for(int i = 0; i < t; i++){
       cout << si[i] << "\n";
    }
}