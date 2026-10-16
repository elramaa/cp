// https://codeforces.com/problemset/problem/472/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	if(n & 1) cout << 9 << " " << n - 9;
	else cout << 8 << " " << n - 8;
	return 0;
}