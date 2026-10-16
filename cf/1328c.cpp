#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string a, b;
    a = b = "";
    bool a_high = false;
    for(int i = 0; i < s.size(); ++i){
      char c = s[i];
      int c_int = s[i] - 48;
      if(c == '2' && i == 0){
        a += '1';
        b += '1';
      }else {
        if(a_high){
          a += '0';
          b += c;
        }else{
          a += to_string((c_int+1)/2);
          b += to_string(c_int/2);
          if(a.back() == '1' && b.back() == '0') a_high = true;
        }
      }
    }
    cout << a << "\n" << b << "\n";
  }
  return 0;
}
