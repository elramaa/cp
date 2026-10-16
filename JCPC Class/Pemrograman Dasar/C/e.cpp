#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int trace = 0;
	cin >> n;
	for(int i = 1, a; i <= n*n; ++i){
		cin >> a;
		if(i % (n+1) == 1) trace += a;
	}	
	cout << trace;
	return 0;
}