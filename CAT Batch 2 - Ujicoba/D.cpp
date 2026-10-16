#include <bits/stdc++.h>
using namespace std;

int main(){
  stack<pair<int, int>> marked;
  int length = 0;
  bool isthere = 0;
  for(int i = 1; i <= 10; ++i){
    cout << i << " " << i;
    cout.flush();
    cin >> isthere;
    if(isthere){
      length++;
      marked.push({i, i});
      break;
    }
    cout << i << " " << (11-i);
    cout.flush();
    cin >> isthere;
    if(isthere){
      length++;
      marked.push({i, 11-i});
      break;
    }
  }
  vector<pair<int, int>> targets{{1, 5}, {5, 10}, {6, 1}, {10, 6}};
  for(auto p: targets){
    if(isthere) break;
    cout << p.first << " " << p.second;
    cout.flush();
    cin >> isthere;
    if(isthere){
      length++;
      marked.push(p);
      break;
    }
  }
  stack<pair<int, int>> dirs;
  dirs.push({-1, 0});
  dirs.push({1, 0});
  dirs.push({0, -1});
  dirs.push({0, 1});
  while(!dirs.empty() && length < 5){
    bool isthere = 0;
    pair<int, int> dir = dirs.top();
    pair<int, int> mark = marked.top();
    int x = mark.first + dir.first;
    int y = mark.second + dir.second;
    if(x < 1 || y < 1 || x > 10 || y > 10){
      dirs.pop();
      continue;
    }
    cout << x << " " << y;
    cout.flush();
    cin >> isthere;
    if(isthere){
      length++;
      marked.push({x, y});
    }else{
      dirs.pop();
      while(marked.size() > 1) marked.pop();
    }
  }
  cout << -1;
  return 0;
}
