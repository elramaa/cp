#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin >> n;
	ll sumA = 0;
	ll sumB = 0;
	for(int i = 0; i < n; ++i){
		int x;
		cin >> x;
		sumA += x;
	}
	for(int i = 0; i < n; ++i){
		int x;
		cin >> x;
		sumB += x;
	}
	cout << (sumA + sumB) * n;
	return 0;
}