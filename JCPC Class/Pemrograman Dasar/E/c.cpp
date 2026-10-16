#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	string s;
	cin >> n >> q >> s;
	while(q--){
		char opr;
		cin >> opr;
		if(opr == '1'){
			int a, b;
			cin >> a >> b;
			swap(s[a-1], s[b-1]);
		}else if(opr == '2'){
			int l, r;
			cin >> l >> r;
			reverse(s.begin()+l-1, s.end()-(n-r));	
		}
	}
	cout << s;
	return 0;
}