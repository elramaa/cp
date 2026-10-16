#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, first, second;
  cin >> s >> first >> second;
  int n = s.length();
  bool forward = false, backward = false;

  bool firstForwardDone = false, secondForwardDone = false;
  int firstForwardPos = s.find(first);
  firstForwardDone = firstForwardPos != string::npos;
  if(firstForwardDone) secondForwardDone = (s.substr(firstForwardPos+first.length())).find(second) != string::npos;
  forward = firstForwardDone && secondForwardDone;

  bool firstBackwardDone = false, secondBackwardDone = false;
  reverse(s.begin(), s.end());
  int firstBackwardPos = s.find(first);
  firstBackwardDone = firstBackwardPos != string::npos;
  if(firstBackwardDone) secondBackwardDone = (s.substr(firstBackwardPos+first.length())).find(second) != string::npos;
  backward = firstBackwardDone && secondBackwardDone;

  if(forward && backward) cout << "both";
  else if(forward) cout << "forward";
  else if(backward) cout << "backward";
  else cout << "fantasy";
  return 0;
}
