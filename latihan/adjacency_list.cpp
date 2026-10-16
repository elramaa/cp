#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> V = {
		{1, 2},
		{3, 2},
		{0},
		{1}
	};
	for(auto &adj: V){
		for(auto &node: adj){
			cout << node << " ";
		}
	}
	return 0;
}