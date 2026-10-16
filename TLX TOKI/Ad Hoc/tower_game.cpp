#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, m; cin >> n >> m;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cout << (i & 1 ? "B" : "W");
		}
		cout << "\n";
	}
	return 0;
}