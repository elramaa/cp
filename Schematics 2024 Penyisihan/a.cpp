#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		int q; cin >> q;
		for(int i = 0; i < q; ++i){
			cout << 1;
		}
		for(int i = 0; i < q-1; ++i){
			cout << 0;
		}
		cout << "\n";
	}
	return 0;
}