#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, sumx, sumy, sumz;
    sumx = 0;
    sumy = 0;
    sumz = 0;
    cin >> n;

    for(int a = 1; a <= n; a++){
       cin >> i >>j >> k;
       sumx = sumx + i;
       sumy = sumy + j;
       sumz = sumz + k;
    }
    if (sumx == 0 && sumy == 0 && sumz == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}