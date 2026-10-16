// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	multiset<char> s;
	cin >> str;
	for(char c: str){
		if(c == '1' || c == '2' || c == '3') s.insert(c);
	}
	for(auto it = s.begin(); it != s.end(); ++it) cout << *it << (it != --s.end() ? "+" : "");
	return 0;
}