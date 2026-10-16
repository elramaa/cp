#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	if(n & 1){
		cout << "2\n";
		cout << n/2 << " " << n/2 + 1;
	}else{
		cout << 2 + (n-6)/2 << "\n";
		for(int i = 2; i <= n-6; i+=2) cout << "2 ";
		cout << "3 3";
	}
	return 0;
}