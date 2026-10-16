#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> H(n);
    int h_diff;
    int h_prev;
    for(int i = 0; i < n; ++i){
      cin >> H[i];
      if(i == k-1) h_diff = h_prev = H[i];
    }
    sort(H.begin(), H.end());
    bool no = false;
    for(int i = 0; i < n; ++i){
      if(H[i] < h_diff || H[i] == h_diff) continue;
      if(H[i] - h_prev <= h_diff){
        h_prev = H[i];
      }else{
        no = true;
        break;
      }
    }
    if(no){
      cout << "NO\n";
    }else{
      cout << "YES\n";
    }
  }
  return 0;
}
