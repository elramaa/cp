// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, antonWin = 0;
	string s;
	cin >> n >> s;
	for(char c: s) if(c == 'A') antonWin++;
	if(antonWin > n - antonWin) cout << "Anton";
	else if(antonWin < n - antonWin) cout << "Danik";
	else cout << "Friendship";
	return 0;
}