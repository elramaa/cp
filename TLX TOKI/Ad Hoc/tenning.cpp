#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	string str_n = to_string(n);
	bool hasZero = false;
	for(auto &nums : str_n) if(nums == '0') hasZero = true;
	cout << (hasZero ? "YES" : "NO");
	return 0;
}