#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    map<string, int> cnt;
    // string a[n], b[n], c[n];
    vector<vector<string>> words(3, vector<string>(n));
    for(int i = 0; i < 3; ++i){
      for(int j = 0; j < n; ++j){
        cin >> words[i][j];
        string word = words[i][j];
        if(cnt.count(word) == 0) cnt[word] = 1;
        else cnt[word]++;
      }
    }


    vector<int> scores(3, 0);
    for(int i = 0; i < 3; ++i){
      for(int j = 0; j < n; ++j){
        string word = words[i][j];
        if(cnt[word] == 1) scores[i] += 3;
        else if(cnt[word] == 2) scores[i] += 1;
      }
    }

    for(auto sc: scores) cout << sc << " ";
    cout << "\n";
  }
  return 0;
}
