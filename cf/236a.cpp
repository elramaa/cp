// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;
	cin >> n;
	set<char> cn;
	for(char c: n) cn.insert(c);
	cout << (cn.size()%2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
	return 0;
}