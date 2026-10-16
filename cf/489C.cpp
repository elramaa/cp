#include <bits/stdc++.h>
using namespace std;

int main(){
  int m, s;
  cin >> m >> s;
  if(m == 1 && s == 0){
    cout << "0 0";
    return 0;
  }
  int length = to_string(s).size();
  string maxnumstr = "";
  string minnumstr = "";
  int sx = s;
  while(sx > 0){
    if(sx <= 9){
      maxnumstr += to_string(sx);
      if(maxnumstr.size() < m){
        minnumstr += to_string(sx-1);
      }else{
        minnumstr += to_string(sx);
      }
      sx -= sx;
    }else {
      maxnumstr += "9";
      minnumstr += "9";
      sx -= 9;
    }
  }
  if(maxnumstr.size() > m || s == 0){
    cout << "-1 -1";
    return 0;
  }
  // minnumstr = maxnumstr;
  while(minnumstr.size() < m - 1){
    minnumstr += "0";
  }
  if(minnumstr.size() == m - 1){
    minnumstr += "1";
  }
  while(maxnumstr.size() < m){
    maxnumstr += "0";
  }
  reverse(minnumstr.begin(), minnumstr.end());
  cout << minnumstr << " " << maxnumstr;
  return 0;
}
