// Problem Link - https://codeforces.com/problemset/problem/224/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    double s1, s2, s3;
    cin >> a >> b >> c;

    s1 = sqrt(a * b/c);
    s2 = sqrt(a * c/b);
    s3 = sqrt(b * c/a);

    cout << 4 * (s1 + s2 + s3) << "\n";
}