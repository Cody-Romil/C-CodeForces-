// Problem Link - https://codeforces.com/problemset/problem/200/B

#include <iostream>
using namespace std;

int main() {
    int n, k;

    double avg = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
       cin >> k;
       avg += k;
    }
    avg /= n;
    cout << avg;
}