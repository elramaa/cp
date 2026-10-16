#include <bits/stdc++.h>
using namespace std;
const int MAX_INT = 100000000;

vector<bool> visited(MAX_INT, false);
void dfs(vector<vector<int>> graph, int node){
	if(visited[node]) return;
	visited[node] = true;
	cout << node << " ";
	for(auto &adj: graph[node]) dfs(graph, adj);
}

int main(){
	vector<vector<int>> graph = {
		{1, 2},
		{3, 2},
		{0, 1},
		{0, 1}
	};
	dfs(graph, 0);
	return 0;
}