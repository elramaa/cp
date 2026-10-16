#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll x, y; cin >> x >> y;
	ll min_x = 2*y/x + 1;
	if(x >= min_x) cout << min_x;
	else cout << x;
	return 0;
}