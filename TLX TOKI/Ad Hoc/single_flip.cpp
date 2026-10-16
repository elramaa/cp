#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n; cin >> n;
	int count = 0;
	int *A = new int[n];
	int *B = new int[n];
	for(int i = 0; i < n; i++) cin >> A[i];
	for(int j = 0; j < n; j++) cin >> B[j];
	for(int x = 0; x < n; ++x) if(A[x] == B[x]) count++;
	cout << count;
	return 0;
}