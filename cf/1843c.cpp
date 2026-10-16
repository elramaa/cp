#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll sum = 1;
		for(ll i = 1; n / i > 1; i*=2) sum += (n/i);
		cout << sum << "\n";
	}
	return 0;
}