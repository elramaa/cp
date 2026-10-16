#include <bits/stdc++.h>
using namespace std;

vector<string> find_path(map<string, vector<string>> tree, string source, string target){

  map<string, bool> visited;
  map<string, string> prev;
  queue<string> q;
  q.push(source);
  visited[source] = true;
  prev[source] = "";
  while(!q.empty()){
    string node = q.front();
    q.pop();
    for(auto adj: tree[node]){
      if(visited[adj]) continue;
      q.push(adj);
      visited[adj] = true;
      prev[adj] = node;
    }
  }
  if(prev.count(target) == 0){
    return {};
  }else{
    vector<string> path;
    for(string node = target; node != ""; node = prev[node]){
      path.push_back(node);
    }
    reverse(path.begin(), path.end());
    return path;
  }
}

int main(){
  int n, m;
  cin >> n >> m;
  map<string, vector<string>> T;
  while(m--){
    string p, c;
    cin >> p >> c;
    T[p].push_back(c);
  }
  string a, b;
  cin >> a >> b;

  vector<string> path = find_path(T, a, b);
  if(path.empty()){
    path = find_path(T, b, a);
  }
  if(path.empty()) cout << "TIDAK MUNGKIN";
  else {
    for(auto p: path) cout << p << "\n";
  }
  return 0;
}
