#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<vi> maxFriends(3, vi(n+1, 0));
    int friends[3][n+1];
    for(int i = 0; i < 3; ++i){
      for(int j = 1; j <= n; ++j) cin >> friends[i][j];
    }

    for(int i = 1; i <= n; ++i){
      for(int j = 0; j < 3; ++j){
        maxFriends[j][i] = friends[j][i];
        for(int k = 0; k < 3; ++k){
          if(j != k){
            maxFriends[j][i] = max(maxFriends[j][i], maxFriends[k][i-1] + friends[j][i]);
          }
        }
      }
    }

    for(auto row: maxFriends){
      for(auto cell: row) cout << cell << " ";
      cout << "\n";
    }
    cout << max({maxFriends[0][n], maxFriends[1][n], maxFriends[2][n]}) << "\n";
  }
  return 0;
}
