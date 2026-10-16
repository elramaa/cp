#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  string to_clear = "";
  for (int c = 0; c < C; ++c) {
    to_clear += "1";
  }

  vector<string> S(R);
  for (int r = 0; r < R; ++r) {
    cin >> S[r];
  }

  bool fallAgain = true;
  while (fallAgain) {
    // clear the full bar row
    int last_row = 0;
    for (int r = 0; r < R; ++r) {
      if (S[r].find(to_clear) != string ::npos) {
        last_row = r;
        for (int c = 0; c < C; ++c) {
          S[r][c] = '0';
        }
      }
    }

    // set the to drop vector
    vector<int> to_drop(C); // a vector contains that have column as the key and
                            // row as the value to drop the top block
    for (int c = 0; c < C; ++c) {
      if (S[last_row][c] == '0')
        to_drop[c] = last_row;
    }
    for (int r = last_row + 1; r < R; ++r) {
      for (int c = 0; c < C; ++c) {
        if (S[r][c] == '0' && S[r - 1][c] != '1')
          to_drop[c] = r;
      }
    }

    // drop the blocks
    for (int r = last_row - 1; r >= 0; --r) {
      for (int c = 0; c < C; ++c) {
        if (S[r][c] == '1') {
          // swap with to drop
          S[to_drop[c]][c] = '1';
          S[r][c] = '0';
          to_drop[c]--;
        }
      }
    }

    fallAgain = false;
    for(string s: S){
      if(s.find(to_clear) != string::npos) fallAgain = true;
    }
  }

  // output the blocks
  for (string s : S) {
    cout << s << "\n";
  }

  return 0;
}
