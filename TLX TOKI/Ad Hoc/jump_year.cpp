#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	if((n % a == 0 && n % b != 0) || n % c == 0) cout << "YES";
	else cout << "NO";
	return 0;
}