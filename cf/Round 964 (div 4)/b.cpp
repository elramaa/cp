#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		int a1, a2, b1, b2;
		int win = 0;
		cin >> a1 >> a2 >> b1 >> b2;
		if(a1 > b1 && a2 > b2 || a1 > b1 && a2 == b2 || a1 == b1 && a2 > b2) win++;
		if(a1 > b2 && a2 > b1 || a1 > b2 && a2 == b1 || a1 == b2 && a2 > b1) win++;
		cout << win*2 << "\n";
	}
	return 0;
}