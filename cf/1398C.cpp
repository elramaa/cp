#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string as; cin >> as;
    vector<int> a(n);
    vector<int> prefix(n);
    for(int i = 0; i < n; ++i){
      a[i] = as[i] - '0';
      if(i > 1) prefix[i] = prefix[i-1] + a[i];
      else prefix[i] = a[i];
    }
    int cnt = 0;
    for(int i = 0, j = 0; i < n && j < n; ){
      int length = j - i + 1;
      int b = prefix[j];
      int a = i > 0 ? prefix[i-1] : 0;
      int sum = b - a;
      if(sum == length){
        j++;
        cnt++;
      }
    }
    cout << cnt;
  }
  return 0;
}
