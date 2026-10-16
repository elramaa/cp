#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n];
  int sum = 0;
  for(int i = 0; i < n; ++i){
    cin >> a[i];
    sum += a[i];
  } 
  sort(a, a+n);
  double avg = (double)sum / n;
  int cnt = 0;
  for(int i = 0; i < n && avg < 4.5; ++i){
    cnt++;
    sum -= a[i];
    sum += 5;
    avg = (double)sum / n;
  }
  cout << cnt;
  return 0;
}
