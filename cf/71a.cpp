// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string word;
	cin >> n;
	while(n > 0){
		cin >> word;
		if(word.length() > 10){
			cout << word.front() << word.length()-2 << word.back();
		} else {
			cout << word;
		}
		cout << "\n";
		--n;
	}
}