#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int cows[n];
  for(int i = 0; i < n; ++i) cin >> cows[i];
  int swap_cnt = 0;
  for(int i = 0; i < n-1; ++i){
    int min_index = i;
    for(int j = i+1; j < n; ++j){
      if(cows[j] < cows[min_index]){
        min_index = j;
      }
    }
    if(min_index != i){
      swap(cows[i], cows[min_index]);
      swap_cnt++;
    }
  }
  cout << swap_cnt;
  return 0;
}
