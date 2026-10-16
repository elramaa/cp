#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int p[n], q[n];
    vector<pi> liked;
    vector<pi> disliked;
    for(int i = 0; i < n; ++i) cin >> p[i];
    string s; cin >> s;
    for(int i = 0; i < n; ++i){
      if(s[i] == '1') liked.push_back({p[i], i});
      else if(s[i] == '0') disliked.push_back({p[i], i});
    } 
    sort(liked.begin(), liked.end());
    sort(disliked.begin(), disliked.end());
    for(int i = 0; i < disliked.size(); ++i){
      q[disliked[i].second] = i + 1;
    }
    for(int i = 0; i < liked.size(); ++i){
      q[liked[i].second] = i + disliked.size() + 1;
    }
    for(auto x: q) cout << x << " ";
    cout << "\n";
  }
  return 0;
}
