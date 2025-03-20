#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--){
        int n, dash_count(0), under_count(0), amount(0);
        cin >> n;
        string str;
        cin >> str;

        if (n < 3){
            cout << 0 << "\n";
        }
        else{
            for (int i = 0; i < str.length(); i++){
                if (str[i] == '-'){
                    dash_count++;
                }
                else if (str[i] == '_'){
                    under_count++;
                }
            }
            if (dash_count < 2 || under_count < 1){
                cout << 0 << "\n";
            }
            else{
                sort(str.begin(), str.end());
                for (int i = dash_count - 1; i >= 2; i--){
                    amount += i * under_count;
                }
                cout << amount << "\n";
            }
        }
    }
}