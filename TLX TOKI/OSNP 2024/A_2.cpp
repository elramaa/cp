#include <bits/stdc++.h>
using namespace std;

int result = 0;

void cek(string s, string pola){
  int res = 0;
  int i = 0;
  for(char c: s){
    if(c == pola[i]){
      res++;
      i = (i + 1) % 3;
    }
  }
  result = max(res, result);
}

int main(){
  string s;
  cin >> s;
  cek(s, "OSN");
  cek(s, "ONS");
  cek(s, "NSO");
  cek(s, "NOS");
  cek(s, "SNO");
  cek(s, "SON");
  if(result < 3){
    cout << -1;
  }else{
    cout << result;
  }
  return 0;
}
