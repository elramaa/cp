#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, m, a, b; cin >> n >> m >> a >> b;
	int area1 = m/a * (n/b);
	int area2 = m/b * (n/a);
	cout << max(area1, area2); 
	return 0;
}