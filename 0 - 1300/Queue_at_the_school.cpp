// Problem Link - https://codeforces.com/problemset/problem/266/B

#include <iostream>
using namespace std;

int main() {
    int n, t;
    string s;
    char tmp;
    cin >> n >> t;
    cin >> s;

    for(t; t > 0; t--){
        for(int i = 0; i < (n - 1); i++){
            if (s[i] == 'B'){
                if (s[i+1] == 'G'){
                    tmp = s[i+1];
                    s[i+1] = s[i];
                    s[i] = tmp;
                    i++;
                }
            }
        }  
    }
    cout << s << endl;
}