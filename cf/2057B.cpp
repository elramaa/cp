#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;

int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    int a[n];
    map<int, int> m; // key -> nums, val -> occurences
    for(int i = 0; i < n; ++i){
      cin >> a[i];
      m[a[i]]++;
    }
    // create a pair vector to be sorted by occurence
    int ans = m.size();
    // vector<pi> v;
    vector<int> v;
    for(auto it = m.begin(); it != m.end(); ++it){
      // v.push_back({ it->second, it->first }); // use occurence as the first value
      v.push_back(it->second);
    }
    sort(v.begin(), v.end());
    for(auto x: v){
      if(x <= k){
        k -= x;
        ans--;
      }else{
        break;
      }
    }
    ans = max(ans, 1);
    cout << ans << "\n";
  }
  return 0;
}
