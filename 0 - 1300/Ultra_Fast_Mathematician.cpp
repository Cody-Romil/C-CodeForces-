// Problem Link - https://codeforces.com/problemset/problem/61/A

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.length(); i++){
       if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')){
        cout << "1";
       }
       else{
        cout << "0";
       }
    }
}