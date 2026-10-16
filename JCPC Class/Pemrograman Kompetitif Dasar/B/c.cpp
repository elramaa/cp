#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int step = 0;
	cin >> n;	
	int books[n];
	for(int i = 0; i < n; i++) cin >> books[i];
	for(int i = 0; i < n-1; i++){
		int lowest = i-1;
		for(int j = i-1; j < n; j++){
		}
		swap(books[i], books[lowest]);
	}
	for(auto &a: books){
		cout << a << "\n";
	}
	cout << step;
	return 0;
}