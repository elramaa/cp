#include <iostream>
using namespace std;

void f(int n, char from, char to, char mid){
  if(n == 1){
    cout << n << " " << from << " " << to << "\n";
    return;
  }
  f(n-1, from, mid, to);
  cout << n << " " << from << " " << to << "\n";
  f(n-1, mid, to, from);
}

int main(){
  int n;
  cin >> n;
  f(n, 'A', 'C', 'B');
  return 0;
}
