#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// Track all the -1 node (root node)
	// Traverse to the leaf from each root node 
	// Get the longest path by counting the maximum path
	// Output longest path + 1
	int n; cin >> n;
	int P[n+1];
	vector<int> roots;
	for(int i = 1; i <= n; ++i){
		cin >> P[n];
		if(P[n] == -1) roots.push_back(i);
	}
	int group = 0;
	for(auto &root: roots){
		while(P[roots] != )
	}
	return 0;
}