#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], ans[n];	
	for(int i = 0; i < n; ++i) cin >> a[i];
	for(int i = 0, j=0; i < n/2+1; ++i, j+=2) ans[j] = a[i]; 
	for(int i = n-1, j = 1; i >= ceil((double)n/2); --i, j+=2) ans[j] = a[i];
	for(auto i: ans) cout << i << " ";
	return 0;
}