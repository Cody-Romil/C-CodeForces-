#include <iostream>
using namespace std;

int main() {
    int num, min_ways, arr[5][5];

    for(int i = 0; i < 5; i++){
       for(int j = 0; j < 5; j++){
          cin >> num;
          if (num == 1){
            min_ways = abs(i-2) + abs(j-2);
          }
          arr[i][j] = num;
       }
    }

    cout << min_ways << endl;
}