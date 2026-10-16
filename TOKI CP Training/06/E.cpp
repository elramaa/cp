#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
  return (a.second < b.second);
}

int main(){
  int n;
  cin >> n;
  pair<int, int> schedule[n];
  for(int i = 0; i < n; ++i){
    int s, d;
    cin >> s >> d;
    schedule[i] = {s, s+d};
  }
  sort(schedule, schedule+n, comp);
  int cnt = 0;
  int start_time = 0;
  for(int i = 0; i < n; ++i){
    if(schedule[i].first >= start_time){
      cnt++;
      start_time = schedule[i].second;
    }
  }
  cout << cnt;
  return 0;
}
