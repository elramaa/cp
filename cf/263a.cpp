// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int solveMatrix(){
	int a[5][5];
	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < 5; ++j){
			cin >> a[i][j];
			if(a[i][j] == 1) return abs(j-2) + abs(i-2); 
		}
	}
}

int main(){
	cout << solveMatrix();
	return 0;
}