// Problem Link - https://codeforces.com/problemset/problem/148/A

#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d, ddr;
    ddr = 0;

    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1){
        cout << d;
    }
    else{
        for(int i = 1; i <= d; i++){
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
                ddr++;
            }
        }
        cout << ddr;
    }
}