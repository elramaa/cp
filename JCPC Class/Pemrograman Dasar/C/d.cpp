#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, pmax;
	cin >> n;
	while(n--){
		int p;
		cin >> p;
		pmax = max(p, pmax);	
	}
	cout << pmax;
	return 0;
}