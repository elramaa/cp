#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, m; cin >> n >> m;
	if((n/2) & 1 || (m/2) & 1) cout << "No";
	else cout << "Yes";
	return 0;
}