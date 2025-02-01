// Problem Link - https://codeforces.com/problemset/problem/80/A

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int n_p = 0;
    cin >> n >> m;
    
    for (int i = n + 1; i<=50; i++){
        if (n_p == 0)
        {
            for (int j = 2; j < i; j++){
                if ((i % j) == 0){
                    n_p = 0;
                    break;
                }
                else {
                    n_p = i;
                }
            }
        }
        else {
            if (n_p == m){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
            break;
        }
    }
}