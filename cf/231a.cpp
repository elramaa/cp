// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	int count = 0;
	int sum = 0;
	cin >> n;
	while(n--){
		for(int i = 0; i < 3; ++i){
			cin >> x;
			sum += x;
		}
		if(sum >= 2) count++;
		sum = 0;
	}
	cout << count;
	return 0;
}