#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> char_cnt(26, 0);
  for (char c : s) {
    char_cnt[c - 65]++;
  }
  sort(char_cnt.rbegin(), char_cnt.rend());
  if (char_cnt[2] == 0 || char_cnt[1] == 0 || char_cnt[0] == 0)
    cout << -1;
  else {
    int length = 0;
    length += char_cnt[2] * 3;
    if (char_cnt[1] > char_cnt[2])
      length += 2;
    else if(char_cnt[0] > char_cnt[1])
      length++;
    cout << length;
  }
  return 0;
}
