// Problem Link - https://codeforces.com/contest/2103/problem/B

#include <bits/stdc++.h>
using namespace std;

int calculate_cost(int n, string s){
    char cur('0');
    int ans(0);

    for (int i = 0; i < n; i++) {
        if (s[i] == cur) ans++;
        else {
            ans++;
            cur = s[i];
            i--;
        }
    }

    return ans;
}

int main() {
    int t, n;
    string s;

    cin >> t;

    while(t--){
        bool found_one = false, found_zero = false;
        int l(-1), r(-1);
        int count01(0), count10(0);
        int ans;
        cin >> n >> s;

        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                if (found_zero) break;
                if (l == -1) l = i, found_one = true;
            }
            else {
                if (l != -1) r = i, found_zero = true;
            }
        }
        if (l != -1 && r != -1 && l < r) reverse(s.begin() + l, s.begin() + r + 1);
        ans = calculate_cost(n, s);
        cout << ans << "\n";
    }
}
