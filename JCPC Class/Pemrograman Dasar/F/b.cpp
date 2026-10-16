#include <bits/stdc++.h>
using namespace std;

int f(int n, int m){
	if(n == 1 || m == 1) return 1;
	return f(n-1, m) + f(n, m-1);
}

int main(){
	int n, m;
	cin >> n >> m;	
	cout << f(n, m);
	return 0;
}