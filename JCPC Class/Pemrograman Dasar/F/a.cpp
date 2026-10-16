#include <bits/stdc++.h>
using namespace std;

int t(double n){
	if(n == 1) return 1;
	return 1 + t(ceil(n/2)) + t(floor(n/2));
}

int main(){
	int n;
	cin >> n;
	cout << t(n);	
	return 0;
}