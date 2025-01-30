// Problem Link - https://codeforces.com/problemset/problem/110/A

#include <iostream>
using namespace std;

int main() {
    long long l;
    int count = 0;
    cin >> l;

    while (l!=0){
        if ((l % 10 == 4) || (l % 10 == 7)){
            count++;
        }
        l/=10;
    }
    if (count == 4 || count == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}