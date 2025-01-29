// Problem Link - https://codeforces.com/problemset/problem/271/A
     
#include <iostream>
#include <set>
using namespace std;
     
int main() {
    int y, num;
    set<int> s = {};
    cin >> y;
    y++;
     
    for(y; y <= 9500; y++){
        num = y;
        while (num!=0){
            s.insert(num%10);
            num /= 10;
        }
        if (s.size() == 4){
            cout << y;
            break;
        }
        else{
            s = {};
        }
    }
}