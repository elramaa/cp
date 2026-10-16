#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	long double n; cin >> n;
	if(sqrt(n) * sqrt(n) == n) cout << (ll)sqrt(n);
	else cout << 0;
	return 0;
}