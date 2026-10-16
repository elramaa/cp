#include <bits/stdc++.h>
using namespace std;

int main(){
  int N = 10;
  int t;
  cin >> t;
  while(t--){
    int p = 0;
    vector<string> A(N);
    for(int i = 0; i < N; ++i){
      cin >> A[i];
    }
    for(int i = 0; i < N; ++i){
      for(int j = 0; j < N; ++j){
        if(A[i][j] == 'X'){
          if((i == 0 || i == 9) || (j == 0 || j == 9)) p += 1; 
          else if((i == 1 || i == 8) || (j == 1 || j == 8)) p += 2; 
          else if((i == 2 || i == 7) || (j == 2 || j == 7)) p += 3; 
          else if((i == 3 || i == 6) || (j == 3 || j == 6)) p += 4; 
          else if((i == 4 || i == 5) || (j == 4 || j == 5)) p += 5; 
        }
      }
    }
    cout << p << "\n";
  }
  return 0;
}
