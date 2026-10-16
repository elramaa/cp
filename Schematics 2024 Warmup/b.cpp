#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, k; cin >> n;
	int t[n+1];
	vector<vector<int>> graph(n+1);
	for(int i = 1; i <= n; i++) cin >> t[i];
	for(int i = 1; i <= n-1; i++){
		int u, v; cin >> u >> v;
		graph[u].push_back(v);
	}
	cin >> k;
	vector<bool> visited(n+1, false);
	vector<int> counter(n+1);
	queue<int> q;
	q.push(1);
	visited[1] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto adj: graph[u]){
			if(visited[adj]) continue;
			visited[adj] = true;
			q.push(adj);
		}
	}
	return 0;
}