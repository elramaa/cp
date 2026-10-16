#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, m;
  cin >> n >> m;
  vector<ll> A(n), B(m);
  ll sum_a, sum_b;
  sum_a = sum_b = 0;
  for(int i = 0; i < n; ++i){
    cin >> A[i];
    sum_a += A[i];
  }
  for(int i = 0; i < m; ++i){
    cin >> B[i];
    sum_b += B[i];
  }

  double avg_a = (double)sum_a / n; 
  double avg_b = (double)sum_b / m; 

  ll ans = 0;
  if(avg_a > avg_b){
    cout << ans;
  }else{
    sort(B.begin(), B.end());
    for(int i = m-1; i > 0; --i){
      ans += B[i];
      sum_a += B[i];
      sum_b -= B[i];
      n++;
      m--;
      if(B[i-1] != B[i] || i == 1){
        avg_a = (double)sum_a / n;
        avg_b = (double)sum_b / m;
        if(avg_a > avg_b){
          cout << ans;
          break;
        }
      }
    }
    if(avg_a <= avg_b){
      cout << -1;
    }
  }
  return 0;
}
