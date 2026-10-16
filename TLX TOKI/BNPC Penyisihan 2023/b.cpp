#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main(){
	int n;
	char A[n];
	bool invalid = false;
	cin >> n >> A;
	for(int i = 0; i < n-2; ++i){
		if(A[i] == '.'){
			if(A[i-1] == A[i+1])
		}
	}
	cout << (invalid ? "-1" : A);
	return 0;
}