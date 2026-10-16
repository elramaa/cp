// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; ++i){
		int x;
		cin >> x;
		a[x-1] = i;
	}
	for(int i: a) cout << i << " ";
	return 0;
}