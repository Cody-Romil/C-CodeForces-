// Problem Link - https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, ans(0);
    cin >> n >> m >> k;

    int applicants[n], appartments[m];
    for(int i = 0; i < n; i++) cin >> applicants[i];
    for(int i = 0; i < m; i++) cin >> appartments[i];

    sort(applicants, applicants + n);
    sort(appartments, appartments + m);

    int i = 0, j = 0;
    while(i < n && j < m) {
        int lower_limit = applicants[i] - k;
        int upper_limit = applicants[i] + k;
        if (appartments[j] >= lower_limit && appartments[j] <= upper_limit) ans++, i++, j++;
        else if (appartments[j] < lower_limit) j++;
        else if (appartments[j] > upper_limit) i++;
    }

    cout << ans << "\n";
}