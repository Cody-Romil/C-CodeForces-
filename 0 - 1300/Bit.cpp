// Problem Link - https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int n;
    string s;
    cin >> n;

    while (n--){
        cin >> s;
        if (s[0] == 'x' || s[0] == 'X'){
            if (s[1] == '+'){
                x++;
            }
            else{
                x--;
            }
        }
        else if (s[0] == '-'){
            x--;
        }
        else{
            x++;
        }
    }

    cout << x;
}