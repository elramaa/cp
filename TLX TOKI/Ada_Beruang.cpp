#include <iostream>
#include <map>
using namespace std;

int main(){
  int n, d;
  cin >> n >> d;
  map<int, bool> B;
  int ans = 0;
  for(int i = 0; i < n; ++i){
    int a;
    cin >> a;
    if(B.count(a)) ans++;
    B[a+d] = true;
  }
  cout << ans;
  return 0;
}
