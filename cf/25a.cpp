#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int A[n+1];
  map<string, int> freq;
  freq["odd"] = 0;
  freq["even"] = 0;
  for(int i = 1; i <= n; ++i){
    cin >> A[i];
    if(A[i] % 2 == 0) freq["even"]++;
    else freq["odd"]++;
  }
  if(freq["even"] > freq["odd"]){
    for(int i = 1; i <= n; ++i){
      if(A[i] % 2 == 1){
        cout << i;
        break;
      }
    }
  }else{
    for(int i = 1; i <= n; ++i){
      if(A[i] % 2 == 0){
        cout << i;
        break;
      }
    }
  }
  return 0;
}
