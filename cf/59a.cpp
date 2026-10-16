// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "HELLO";
	int lowerCount = 0;
	cin >> s;
	for(char c: s) if(islower(c)) lowerCount++;
	if(lowerCount >= s.length() - lowerCount){
		for(char &c: s) c = tolower(c);
	}else{
		for(char &c: s) c = toupper(c);
	}
	cout << s;
	return 0;
}