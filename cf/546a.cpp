// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, n, w, price;
	cin >> k >> n >> w;
	price = k*w*(w+1)/2;
	cout << (n > price ? 0 : price - n);
	return 0;
}