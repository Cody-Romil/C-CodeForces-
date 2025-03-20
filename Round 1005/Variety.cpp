#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n], l(0), r(0),  a(0), b(0), max_length(0);
        unordered_map<int, int> freq;

        for(int i = 0; i < n; i++){
           cin >> arr[i];
           freq[arr[i]]++;
        }
        
        if (n == 1){
            cout << 1 << " " << 1 << "\n";
        }
        else{
            for(int i = 0; i < n; i++){
               if (freq[arr[i]] == 1){
                if (l == 0){
                    l = i + 1;
                    r = l;
                }
                else{
                    r = i + 1;
                }
                if ((r - l) >= max_length){
                    max_length = r - l;
                    a = l;
                    b = r;
                }
               }
               else{
                l = 0;
                r = 0;
               }
            }

            if (a == 0 && b == 0){
                cout << 0 << "\n";
            }
            else{
                cout << a << " " << b << "\n";
            }
        }
    }
}