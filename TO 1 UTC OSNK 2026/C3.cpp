#include <bits/stdc++.h>
using namespace std;

int main(){
  int N = 50;
  // cin >> N;

  int tanma[N + 1] = {0};
  int pana[N + 1] = {0};
  int tanpa[N + 1] = {0};
  int nama[N + 1] = {0};

  for(int i = 1; i <= N; ++i){
    for(int j = i; j <= N; j += i){
      tanma[i]++;
      pana[j]++;
    }
  }

  for(int i = 1; i <= N; ++i){
    tanpa[i] = tanpa[i-1] + tanma[i];
    nama[i] = nama[i-1] + pana[i];
    if(tanpa[i] == nama[i]) cout << i << " ";
  }
  
  // cout << tanma[2026] << " " << pana[2026];
  return 0;
}
