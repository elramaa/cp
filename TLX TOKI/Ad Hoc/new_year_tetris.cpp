#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	cout << fixed << setprecision(0) << pow(n, 2) - (n & 1 ? 1 : 0);
	return 0;
}