#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	if(n == 1) cout << "a";
	else if(n == 2) cout << "aa";
	else {
		for(int i = 1; i <= n; ++i){
			if(i % 3 == 0) cout << 'e';
			else if((i + 1) % 3 == 0) cout << 'i';
			else if((i + 2) % 3 == 0) cout << 'p';
		}
	}
	return 0;
}