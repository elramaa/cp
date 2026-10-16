#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; getline(cin, s);
  if(s == "0") cout << "nol";
  else if(isdigit(s[0])) cout << "bilangan bulat positif";
  else if(s[0] == '-') cout << "bilangan bulat negatif";
  else cout << "kata";
  return 0;
}
