#include <bits/stdc++.h>
using namespace std;

int MOD = 100;

int cinta(int teman, int musuh){
  if(musuh == 0 || musuh == teman) return 1;
  return (1 + cinta(teman-1, musuh-1) + cinta(teman-1, musuh)) % MOD;
}

int damai(int sejahtera){
  int hasil = 0;
  for(int i = 0; i <= sejahtera; ++i){
    hasil = (hasil + cinta(sejahtera, i)) % MOD;
  }
  return hasil;
}

int rasa(int aman){
  int hasil = 0;
  for(int i = 0; i <= aman; ++i){
    hasil = (hasil + damai(i)) % MOD;
  }
  return hasil;
}

int main(){
  // cout << cinta(9, 5);
  // cout << damai(0);
  cout << rasa(2025);
  return 0;
}
