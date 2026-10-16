#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, k; cin >> n >> k;
  string s; cin >> s;
  int sz = s.size();
  int consecutive_a_count = s[0] == 'A' ? 1 : 0;
  vector<int> consecutive_b_lengths;
  int consecutive_b_length = 0;
  bool counting_consecutive_b_active = false;
  int b_cnt = s[0] == 'B' ? 1 : 0;
  for(int i = 1; i < sz; ++i){
    if(s[i] == 'B') b_cnt++;
    // Count length of each consecutive B that is in between A
    if(s[i] == 'B' && s[i-1] == 'A'){
      counting_consecutive_b_active = true;
      consecutive_b_length = 1;
    }
    if(s[i] == 'B' && s[i-1] == 'B' && counting_consecutive_b_active){
      consecutive_b_length++;
    }
    if(s[i] == 'A' && s[i-1] == 'B' && counting_consecutive_b_active){
      counting_consecutive_b_active = false;
      consecutive_b_lengths.push_back(consecutive_b_length);
      consecutive_b_length = 0;
    }

    // Count how many connected A
    if(s[i] == 'A' && s[i-1] != 'A') consecutive_a_count++;
  }

  if(k >= consecutive_a_count) cout << b_cnt;
  else {
    sort(consecutive_b_lengths.begin(), consecutive_b_lengths.end());
    for(int i = 0; i < consecutive_a_count - k; ++i){
      b_cnt -= consecutive_b_lengths[i];
    }
    cout << b_cnt;
  }
  return 0;
}
