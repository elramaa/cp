// https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	long long n;
	cin >> n;
	if(n & 1) cout << -n/2-1;
	else cout << n / 2;
	return 0;
}