#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> A(n);
	ll min_sum = 0;
	ll max_sum = INT64_MIN;
	for(int i = 0; i < n; ++i){
		cin >> A[i];
		min_sum += A[i];
	}
	ll prev_sum = 0;
	for(int i = 0; i < n; ++i){
		// left*mid + right
		// (prev sum - A[i]) * A[i] + min sum - prev sum
		prev_sum += A[i];
		max_sum = max(max_sum, (prev_sum - A[i])*A[i] + min_sum - prev_sum);
	}
	cout << max(max_sum, min_sum);
	return 0;
}