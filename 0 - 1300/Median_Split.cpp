// Problem Link - https://codeforces.com/contest/2103/problem/C#

#include <bits/stdc++.h>
using namespace std;

int calculate_median(vector<int> v, int k){
    int sum(0), count(0);

    for(int i = 0 ,len = 1; i < v.size() - 1; i++, len++){
        if (v[i] > k) sum--;
        else sum++;
        if (sum >= 0) {
            if (len % 2) if (v[i + 1] > k) i++;
            count++, sum = 0;
        }
    }
    return count;
}

int main() {
    int t, n, k;
    cin >> t;

    while(t--){
        int forward_count(0), backward_count(0), mid_count(0), sum(0), index(0);
        cin >> n >> k;
        vector<int> v(n);

        for(int i = 0; i < n; i++) cin >> v[i];

        forward_count = calculate_median(v, k);
        reverse(v.begin(), v.end());
        backward_count = calculate_median(v, k);

        if (forward_count >= 2 || backward_count >= 2) cout << "YES\n";
        else {
            for(int i = 0; i < v.size() - 1; i++){
                if (v[i] > k) sum--;
                else sum++;
                if (sum >= 0) {
                    mid_count++;
                    index = i;
                    sum = 0;
                    break;
                }
            }
            for(int i = n - 1; i > index + 1; i--){
                if (v[i] > k) sum--;
                else sum++;
                if (sum >= 0) {
                    mid_count++;
                    break;
                }
            }
            if (mid_count >= 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}