#include <bits/stdc++.h>
using namespace std;

int g(int x){
	int count = 0;
	for (int i = 1; i <= x; ++i) if(x % i == 0) count++;
	return count;
}

int h(int x){
	if(x == 1) return 1;
	return g(x) + h(x-1);
}

int main(){
	int x;
	cin >> x;
	cout << h(x);
	return 0;
}