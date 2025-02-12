#include <iostream>
using namespace std;
 
int main()
{
    int t, min;
    min = 0;
    string s;
    cin >> t;
    
    int ans[t];
    int i = 0;
    
    while (t--){
        cin >> s;
        if (s.length() > 1){
            for (int a = 0; a < s.length() - 1; a++){
                if (s[a] == s[a + 1]){
                    min = 1;
                    break;
                }
                else {
                    min = s.length();
                }
            }
        }
        else{
            min = 1;
        }
        ans[i] = min;
        min = 0;
        i++;
    }
    
    for (int j = 0; j < i; j++){
        cout << ans[j] << "\n";
    }
}