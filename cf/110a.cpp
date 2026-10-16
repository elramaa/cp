// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;

string isLuckyNumber(long long n){
	int luckyCount = 0;
	for(char c: to_string(n)){
		if(luckyCount > 7) return "NO";
		if(c == '4' || c == '7') luckyCount++;
	}
	return (luckyCount == 4 || luckyCount == 7) ? "YES" : "NO";
}

int main(){
	long long n;
	cin >> n;
	cout << isLuckyNumber(n);
	return 0;
}