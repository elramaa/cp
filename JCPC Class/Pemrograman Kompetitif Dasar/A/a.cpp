#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
	while(b){
		ll temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

ll lcm(ll a, ll b){
	return (a*b) / gcd(a, b);
}

int main(){
	ll n, a, b;
	cin >> n >> a >> b;	
	cout << n/a + n/b - n/lcm(a,b);
	return 0;
}