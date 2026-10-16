#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> S(n);
  for(int i = 0; i < n; ++i) cin >> S[i];
  for(int i = 0; i < n; ++i){
    for(int j = i; j < n - 1; ++j){
      if(S[j].size() < S[j+1].size() || (S[j].size() == S[i].size() && S[j] < S[i])){
        swap(S[j], S[i]);
      }
    }
  }
  for(int i = 0; i < n; ++i){
    cout << S[i] << "\n";
  }
  return 0;
}
