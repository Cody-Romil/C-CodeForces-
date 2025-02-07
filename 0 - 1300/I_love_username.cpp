// Problem Link - https://codeforces.com/problemset/problem/155/A

#include <iostream>
using namespace std;

int main() {
    int n, max, min, a;
    a = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];

    for(int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
            a++;
        }
        if (arr[i] < min){
            min = arr[i];
            a++;
        }
    }

    cout << a;
}