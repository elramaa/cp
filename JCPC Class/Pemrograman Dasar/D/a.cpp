#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	set<int> hilang;
	while(k--){
		int x;
		cin >> x;
		hilang.insert(x);
	}
	for(int i = 1; i <= n; ++i){
		if(hilang.count(i) != 1) cout << i << " ";
	}	
	return 0;
}