// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	int c = 0, maxc = 0;
	cin >> n;
	while(n--){
		cin >> a >> b;
		c = c - a + b;
		maxc = max(c, maxc);
	}
	cout << maxc;
	return 0;
}