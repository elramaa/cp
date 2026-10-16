#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int h; cin >> h;
	map<int, vector<int>> tree;
	map<int, int> weight;
	set<int> node;
	tree[0] = {};
	weight[0] = 0;
	node.insert(0);
	int last = 0;
	while(h--){
		string s;
		int t, x;
		cin >> s >> t;
		if(s == "Pangkas"){
			map<int, bool> visited;
			queue<int> s;
			s.push(t);
			while(!s.empty()){
				int root = s.front();
				visited[root] = true;
				s.pop();
				for(auto &branch: tree[root]){
					if(visited[branch]) continue;
					s.push(branch);
				}
				node.erase(root);
				tree.erase(root);
			}
			continue;
		}
		cin >> x;
		if(s == "Siram"){
			tree[t].push_back(++last);
			node.insert(last);
			tree[last] = {};
			weight[last] = x;
		}else if(s == "Pupuk"){
			map<int, bool> visited;
			queue<int> s;
			s.push(t);
			while(!s.empty()){
				int root = s.front();
				visited[root] = true;
				weight[root] += x;
				s.pop();
				for(auto &branch: tree[root]){
					if(visited[branch]) continue;
					s.push(branch);
				}
			}
		}
	}
	for(auto &n: node) cout << weight[n] << " ";
	return 0;
}