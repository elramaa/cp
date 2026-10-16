// https://tlx.toki.id/problems/troc-35/B

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k, a, b, x;
	cin >> n >> m >> k >> a >> b;
	// modal = n
	// harga = m;
	// gram = k;
	// kapasitas osana = a;
	// kapasitas najimi = b;
	// osana dibelikan selalu 2 kali lipat atau berarti najimi selalu setengah dari osana
	int arr[] = {(n/m/3)*3, (b/k*3), (a/k/2*3)};
	x = min(&arr);
	cout << x;
	return 0;	
}