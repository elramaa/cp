#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int c2 = n/2;
  cout << c2 << "\n";
  if(n % 2 == 1){
    for(int i = 0; i < c2 - 1; ++i){
      cout << 2 << " ";
    }
    cout << 3;
  }else{
    for(int i = 0; i < c2; ++i){
      cout << 2 << " ";
    }
  }
	return 0;
}
