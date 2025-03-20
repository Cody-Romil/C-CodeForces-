#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--){
        float n, k, p;
        bool possible = true;
        cin >> n >> k >> p;

        if (k <= 0){
            if ((n * -p) > k){
                cout << -1 << "\n";
                possible = false;
            }
        }
        else if (k > 0){
            if ((n * p) < k){
                cout << -1 << "\n";
                possible = false;
            }
        }
        if (possible){
            cout << ceil(abs(k / p)) << "\n";
        }
    }
}