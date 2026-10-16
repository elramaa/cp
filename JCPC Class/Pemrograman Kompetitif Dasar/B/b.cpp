#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> data;	
	while(n--){
		int x;
		cin >> x;
		data.push_back(x);
	}
	sort(data.begin(), data.end());
	for(auto e: data){
		cout << e << " ";
	}
	return 0;
}