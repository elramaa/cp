#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int a, b, c; cin >> a >> b >> c;
	int round_ = (a+b+c)/7;	
	cout << (max({a,b,c}) == round_*4 ? "YA" : "TIDAK");
	return 0;
}