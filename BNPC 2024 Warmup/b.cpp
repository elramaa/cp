#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main(){
	int n;
	str s;
	cin >> n >> s;
	bool ast = false;
	for(int i = 0; i < n; ++i){
		if(s[i] == '*') ast = !ast;
		else if(!ast) cout << s[i];
	}		
	return 0;
}