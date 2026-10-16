// https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	short w;
	cin >> w;
	cout << ((w & 1 || w == 2) ? "NO" : "YES");
}