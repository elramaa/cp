#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, l;
	cin >> n >> m >> l;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			if((i <= l || i > n-l) || (i > l && i <= n-l && j <=l )) cout << "*";
			else cout << ".";
		}
		cout << "\n";
	}	
	return 0;
}