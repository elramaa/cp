#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;	
	vector<int> P;
	while(n--){
		int x;
		cin >> x;
		P.push_back(x); 
	}
	sort(P.begin(), P.end());
	while(q--){
		int x;
		cin >> x;
		cout << P[x-1] << "\n";
	}
	return 0;
}