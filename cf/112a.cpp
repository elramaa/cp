// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;

void lowerWord(string* str){
	for(char &c: *str) c = tolower(c);
}

int main(){
	string str1, str2;
	cin >> str1 >> str2;
	lowerWord(&str1);
	lowerWord(&str2);
	if(str1 < str2) cout << -1;
	else if(str1 > str2) cout << 1;
	else cout << 0;
	return 0;
}