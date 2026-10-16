#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, m; cin >> n >> m;
	pair<int, int> P, E;
	cin >> P.first >> P.second;
	cin >> E.first >> E.second;
	char start; cin >> start;
	if(start == 'P'){
		cout << 0;
	}else if(start == 'E'){
		cout << abs(P.first - E.first) + abs(P.second - E.second);
	}
	return 0;
}