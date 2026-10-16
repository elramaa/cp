// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x = 0;
	string opr;
	cin >> n;
	while(n--){
		cin >> opr;
		if(opr[0] == '+' || opr[2] == '+') x++;
		else if(opr[0] == '-' || opr[2] == '-') x--;
	}
	cout << x;
	return 0;
}