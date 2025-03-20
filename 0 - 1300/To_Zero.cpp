#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        if(n % 2 == 0) cout << (int) ceil(n / (k - 1.0)) << "\n";
        else cout << (int) ceil((n - k) / (k - 1.0)) + 1 << "\n";
    }
}