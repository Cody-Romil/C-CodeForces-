// Problem Link - https://codeforces.com/problemset/problem/233/A

#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    int arr[n];

    for(int i = 1; i <= n; i++){
        arr[i - 1] = i;
    }

    if (n % 2 != 0){
        cout << "-1";
    }
    else{
        for (int i = 0; i < n - 1; i++){
            tmp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = tmp;
            i++;
        }

        for(int i = 0; i < n; i++){
           cout << arr[i] << " ";
        }
    }
    
}