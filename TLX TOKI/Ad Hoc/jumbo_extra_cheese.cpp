#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	if(n < 19) cout << 0;
	else if(n > 100) cout << 9;
	else if(n % 10 == 9) cout << n/10;
	else cout << n/10 - 1;
	return 0;
}