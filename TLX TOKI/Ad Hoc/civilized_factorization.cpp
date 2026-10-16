#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	int count_factor = 0;
	for(int i = 1; i <= n; ++i) if(n % i == 0) count_factor++;
	cout << (count_factor == 5 ? "YES" : "NO");
	return 0;
}