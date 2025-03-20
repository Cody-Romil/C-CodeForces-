// Problem Link - https://codeforces.com/problemset/problem/165/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x(0), y(0), supercentral_point_count(0);
    bool right(false), left(false), up(false), down(false);
    cin >> n;

    vector<pair<int, int>> points;

    for(int i = 0; i < n; i++){
       cin >> x >> y;
       points.push_back({x, y});
    }

    if (n <= 4){
        cout << 0 << "\n";
    }
    else{
        for(int i = 0; i < points.size(); i++){
           for(int j = 0; j < points.size(); j++){
              if (points[i].first == points[j].first){
                if (points[i].second < points[j].second){
                    up = true;
                }
                else if (points[i].second > points[j].second){
                    down = true;
                }
              }
              else if (points[i].second == points[j].second){
                if (points[i].first < points[j].first){
                    right = true;
                }
                else if (points[i].first > points[j].first){
                    left = true;
                }
              }
           }
           if (right && left && up && down) supercentral_point_count++;
           right = false;
           left = false;
           up = false;
           down = false;
        }
        cout << supercentral_point_count << "\n";
    }
}