#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, inp, sum(0), best(0);
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++){
       cin >> inp;
       v.push_back(inp);
    }

    for(int i = 0; i < n; i++){
       sum = max(v[i], sum + v[i]);
       best = max(best, sum);
    }

    cout << best << "\n";
}