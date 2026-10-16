#include <bits/stdc++.h>
using namespace std;

void hanoi_solver(int n, char from, char aux, char to){
  if(n == 0) return;
  hanoi_solver(n-1, from, to, aux);
  printf("%d %c %c\n", n, from, to);
  hanoi_solver(n-1, aux, from, to);
}

int main(){
  int n; cin >> n;
  hanoi_solver(n, 'A', 'B', 'C');
  return 0;
}
