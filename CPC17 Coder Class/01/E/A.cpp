#include <iostream>
using namespace std;

int g(int n) {
  int out = 0;
  for(int i = 1; i*i <= n; ++i){
    if(n % i == 0){
      if(n / i == i) out += 1;
      else out += 2;
    }
  }
  return out;
}

int h(int n) {
  int out = 0;
  for (int i = 1; i <= n; ++i) {
    out += g(i);
  }
  return out;
}

int main() {
  int x;
  cin >> x;
  cout << h(x);
  return 0;
}
