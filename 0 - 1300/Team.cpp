// Problem Link - https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main() {
    int n, s, p;
    p = 0;
    s = 0;
    cin >> n;
    int arr[3];

    while(n--){
        for(int i = 0; i < 3; i++){
           cin >> arr[i];
           if (arr[i] == 1){
            s+=1;
           }
        }
        if (s>=2){
            p+=1;
        }
        s = 0;
    }
    cout << p;
}