// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0;
	string str;
	cin >> n >> str;
	for(int i = 1; i < str.length(); ++i){
		if(str[i] == str[i-1]) count++;
	}
	cout << count;
	return 0;
}