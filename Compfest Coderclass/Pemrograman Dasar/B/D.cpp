#include <bits/stdc++.h>
using namespace std;

int main(){
  int sisi[3]; cin >> sisi[0] >> sisi[1] >> sisi[2];
  sort(sisi, sisi+3);
  if(sisi[0] + sisi[1] > sisi[2]) cout << "segitiga";
  else cout << "bukan segitiga";
  return 0;
}
