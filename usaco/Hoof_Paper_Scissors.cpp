#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  char games[n+1];
  for(int i = 1; i <= n; ++i) cin >> games[i];
  vector<map<char, int>> prefix(n+1, map<char, int>{{'H', 0}, {'P', 0}, {'S', 0}});
  for(int i = 1; i <= n; ++i){
    prefix[i] = prefix[i-1];
    prefix[i][games[i]]++;
  }
  int max_ = 0;
  for(int i = 0; i <= n; ++i){
    vector<int> pre_sum{prefix[i]['H'], prefix[i]['P'], prefix[i]['S']};
    vector<int> post_sum{
      prefix[n]['H'] - pre_sum[0],
      prefix[n]['P'] - pre_sum[1],
      prefix[n]['S'] - pre_sum[2] 
    };
    max_ = max(max_, *max_element(pre_sum.begin(), pre_sum.end()) + *max_element(post_sum.begin(), post_sum.end()));
  }
  cout << max_;
  return 0;
}
