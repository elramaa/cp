#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, q;
	cin >> n >> q;
	vector<int> A(n+1);
	for(int i = 1; i <= n; ++i) cin >> A[i];
	while(q--){
		int L, R;
		cin >> L >> R;
		int last;
		set<int> p;
		for(int i = L; i <= n; ++i){
			if(A[i] == -1) break; 
			p.insert(i);
			if(i <= R) last = i;
		}
		for(int i = R; i > 0; --i){
			if(A[i] == -1 || i == last) break;
			p.insert(i);
		}
		int sum = 0;
		for(auto &p_: p){
			sum += A[p_];
		}
		cout << sum << "\n";
	}	
	return 0;
}