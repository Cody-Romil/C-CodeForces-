#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, i(0), u_dx(0), u_dy(0);
    cin >> t;

    string ans[t];

    while (t--)
    {
        cin >> x >> y;
        if (x == y){
            ans[i] = "No";
        }
        else if (abs(x - y) == 1){
            ans[i] = "Yes";
        }
        else if (y > x){
            ans[i] = "No";
        }
        else{
            u_dx = x % 9;
            u_dy = y % 9;
            if (abs(u_dx - u_dy) == 1){
                ans[i] = "Yes";
            }
            else{
                ans[i] = "No";
            }
        }
        i++;
    }

    for(int a = 0; a < i; a++){
       cout << ans[a] << "\n";
    }
}