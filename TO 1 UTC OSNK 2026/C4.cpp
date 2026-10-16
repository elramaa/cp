#include <bits/stdc++.h>
using namespace std;

void tanma(int &u, int &t, int &c){
  int temp = u;
  u = t; t = c; c = temp;
}

void pana(int N, int A[]){
  for(int i = 0; i < N; ++i){
    for(int j = 0; j + 2 < N; ++j){
      while(A[j] > A[j+1] || A[j] > A[j+2]){
        tanma(A[j], A[j+1], A[j+2]);
      }
    }
  }
}

int main(){
  int A[5] = {5, 4, 3, 2, 1};
  pana(5, A);
  for(int a: A) cout << a << " ";
  return 0;
}
