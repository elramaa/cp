#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		double res = 1;
		for(int i = 0; i < n; ++i) cin >> arr[i];
		reverse(arr[0], arr[n-1]);
		for(int i = 0; i < 100; ++i){
			for(int j = 0; j < n; ++j){
				res = arr[j] + (1.0)/res;
				cout << res << "\n";
			}
		}
		// cout << res << "\n";
	}
	return 0;
}