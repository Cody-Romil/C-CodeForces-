// Problem Link - https://codeforces.com/problemset/problem/272/A

#include <iostream>
using namespace std;

int main() {
    int n, f, total(0), ans(0);
    cin >> n;

    for(int i = 1; i <= n; i++){
       cin >> f;
       total += f;
    }

    for (int i = 1; i <= 5;i++){
        if (((total + i) % (n + 1) != 1)){
            ans++;
        }
    }

    cout << ans << "\n";
}