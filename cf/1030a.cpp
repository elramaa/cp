// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;

string solve(int n){
	while(n--){
		int i;
		cin >> i;
		if(i == 1) return "HARD";
	}
	return "EASY";
}

int main(){
	int n;
	cin >> n;
	cout << solve(n);
	return 0;
}