// Problem Link - https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i(1), ways(0), attacks(0);
    cin >> n;

    int ans[n];
    ans[0] = 0;

    while(i <= n){
        for(int a = 1; a <= i; a++){
            for(int b = 1; b <= i; b++){
                if ((b + 2) <= i){
                    if (a > 2){
                        attacks+=2;
                    }
                    else if (a == 2){
                        attacks++;
                    }
                    if ((i - a) >= 2){
                        attacks+=2;
                    }
                    else if ((i - a) == 1){
                        attacks++;
                    }
                }
                else if(b + 1 <= i){
                    if (a > 2){
                        attacks++;
                    }
                    if ((i - a) >= 2){
                        attacks++;
                    }
                }
                if (b > 2){
                    if (a > 2){
                        attacks+=2;
                    }
                    else if (a == 2){
                        attacks++;
                    }
                    if ((i - a) >= 2){
                        attacks+=2;
                    }
                    else if ((i - a) == 1){
                        attacks++;
                    }
                }
                else if (b == 2){
                    if (a > 2){
                        attacks++;
                    }
                    if ((i - a) >= 2){
                        attacks++;
                    }
                }
                ways += (i*i) - attacks - 1;
                attacks = 0;
            }
        }
        ans[i - 1] = ways/2;
        ways = 0;
        i++;
    }

    for(int i = 0; i < n; i++){
       cout << ans[i] << "\n";
    }
}