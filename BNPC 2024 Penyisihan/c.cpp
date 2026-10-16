#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	ll k;
	cin >> n >> k;
	vector<int> A;
	for(int i = 0; i < n; ++i){
		cin >> A[i];
	}
	while(k--){

	}
	int sum = 0;
	for(int i = 0; i < n; ++i){
		sum += A[i];
	}
	cout << sum;
	return 0;
}