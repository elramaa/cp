#include <bits/stdc++.h>
using namespace std;

string is_isomorph(string a, string b, int len){
  vector<int> last_a(26, -1);
  vector<int> last_b(26, -1);
  for(int i = 0; i < len; ++i){
    int ia = a[i] - 'a';
    int ib = b[i] - 'a';
    if(last_a[ia] == last_b[ib]){
      last_a[ia] = i;
      last_b[ib] = i;
    }else{
      return "TIDAK";
    }
  }
  return "YA";
}

int main(){
  int n, q; cin >> n >> q;
  string s; cin >> s;
  while(q--){
    int k; cin >> k;
    if(k == 1){
      int u; char c;
      cin >> u >> c;
      s[u-1] = c;
    }else if(k == 2){
      int l, r;
      cin >> l >> r;
      while(l <= r){
        if(s[l-1] == 'd') s[l-1] = 'a';
        else s[l-1]++;
        l++;
      }
    }else if(k == 3){
      int l, r, p;
      cin >> l >> r >> p;
      string sl = s.substr(l-1, p);
      string sr = s.substr(r-1, p);
      cout << is_isomorph(sl, sr, p) << "\n";
    }
  }
  return 0;
}
