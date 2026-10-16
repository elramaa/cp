#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int> arr(n * n);
    for(int i = 0, l = 1, r = n * n; i < n * n; ++i){
      if(i % 2 == 0) arr[i] = l++; 
      else arr[i] = r--;
    }
    for(int i = 0; i < n; ++i){
      if(i % 2 == 0){
        for(int j = i * n; j < i * n + n; ++j){
          cout << arr[j] << " ";
        }
      }else{
        for(int j = (i + 1) * n - 1; j >= i * n; --j){
          cout << arr[j] << " ";
        }
      }
      cout << "\n";
    }
  }
  return 0;
}
