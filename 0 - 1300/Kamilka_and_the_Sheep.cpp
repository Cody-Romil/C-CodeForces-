// Problem Link - https://codeforces.com/contest/2092/problem/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, minimum(-1), maximum(-1);
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        minimum = *min_element(v.begin(), v.end());
        maximum = *max_element(v.begin(), v.end());

        cout << abs(maximum - minimum) << "\n";
    }
}