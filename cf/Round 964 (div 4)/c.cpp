#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		int n, s, m, prevR;
		bool yes = false;
		cin >> n >> s >> m;
		for(int i = 1; i <= n; i++){
			int l, r;
			cin >> l >> r;
			if(!yes && (i == 1 && l >= s || l - prevR >= s || i == n && m - r >= s)){
				yes = true;
				cout << "YES\n";
			}	
			prevR = r;
		}
		if(!yes) cout << "NO\n";
	}
	return 0;
}