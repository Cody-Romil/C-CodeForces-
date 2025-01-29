// Problem Link - https://codeforces.com/problemset/problem/271/A
// 2014 -> 4, 1, 0

#include <iostream>
using namespace std;

int main() {
    int y, a, b, c, d, num;
    cin >> y;
    y++;

    if (1000 <= y <= 9000){
        while (true){
            a = y % 10;
            b = y / 10 % 10;
            c = y / 100 % 10;
            d = y / 1000 % 10;
            if (a != b && a != c && a != d && b != c && b != d && c != d){
                cout << y;
                break;
            }
            y++;
        }
    }
    else{
        return 0;
    }
}