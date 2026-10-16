#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll N; cin >> N;
  ll bit_length = (ll)log2(N);
  if(pow(2, bit_length) == N) bit_length--;
  ll x = 0;
  for(ll i = 0; i <= bit_length; i++){
    ll pow_ = pow(2, i);
    if((N & pow_) != pow_) x += pow_;
  }
  if(x == 0) x = 1;
  cout << x;
  // int N;
  // cin >> N;
  // int max_sum = 0;
  // int min_x = pow(2, 12);
  // for(int i = 1; i < N; ++i){
  //   int sum = (N ^ i) + (N & i);
  //   // cout << i << ": " << sum << "\n";
  //   if(sum > max_sum){
  //     max_sum = sum;
  //     min_x = i;
  //   }else if(sum == max_sum){
  //     min_x = min(i, min_x);
  //   }
  // }
  // cout << min_x;
  return 0;
}
