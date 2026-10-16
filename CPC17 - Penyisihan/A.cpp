#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  ll a[n], b[n];
  for(int i = 0; i < n; ++i) cin >> a[i];
  for(int i = 0; i < n; ++i) cin >> b[i];
  ll skor_chanek, skor_ganesh;
  skor_chanek = skor_ganesh = 0;
  for(int i = n-1; i >= 0; --i){
    if(a[i] > b[i]) skor_chanek += a[i] - b[i];
    else if(a[i] < b[i]) skor_ganesh += b[i] - a[i];
  } 
  if(skor_chanek > skor_ganesh) cout << "Pak Chanek";
  else if(skor_chanek < skor_ganesh) cout << "Pak Ganesh";
  else cout << "Mabar";
  return 0;
}
