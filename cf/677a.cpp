// https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, h, a;
	int w = 0;
	cin >> n >> h;
	while(n--){
		cin >> a;
		if(a > h) w += 2;
		else w++;
	}
	cout << w;
	return 0;
}