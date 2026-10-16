#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int A[n];
		for(int i = 0; i < n; ++i){
			cin >> A[i];
		}
		bool yes = false;
		for(auto &i: A){
			if(yes) break;
			for(auto &j: A){
				if(i - j == k || i + j == k){
					yes = true;
					break;
				}
			}	
		}
		cout << (yes ? "Yes" : "No");
		cout << "\n";
	}
	return 0;
}