// Problem Link - https://codeforces.com/contest/2093/problem/C

#include <bits/stdc++.h>
using namespace std;

void checkprime(int x){
    bool isprime = true;

    for (int i = 2; i <= (int) sqrt(x); i++){
        if (x % i == 0) {
            isprime = false;
            break;
        }
    }
    if (isprime) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t, x, y_num, k;
    cin >> t;

    while(t--){
        string y;
        cin >> x >> k;

        if (k == 1) {
            if (x == 1) cout << "NO\n";
            else checkprime(x);
            
        }
        else {
            if (x == 1) {
                for (int i = 1; i <= k; i++) y += '1';
                y_num = stoi(y);
                checkprime(y_num);
            }
            else cout << "NO\n";
        }
    }
}