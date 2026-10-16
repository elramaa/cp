#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, m; cin >> n >> m;
	int *A = new int[n];	
	for(int i = 0; i < n; ++i){
		A[i] = i+1;
	}
	for(int i = 0; i < m; ++i){
		int x1, x2; cin >> x1 >> x2;
		swap(A[x1-1], A[x2-1]);
	}
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		cout << A[x-1] << "\n";
	}
	return 0;
}