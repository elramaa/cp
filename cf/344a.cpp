// https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0;
	string before;
	cin >> n;
	while(n--){
		string i;
		cin >> i;
		if(i != before){
			count++;
			before = i;
		}
	}
	cout << count;
	return 0;
}