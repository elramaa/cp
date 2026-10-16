#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		string rev = s.substr(s.size()/2);
		reverse(rev.begin(), rev.end());
		if(s.substr(0, ceil((double)s.size()/2)) == rev) cout << "palindrom\n";
		else cout << "bukan palindrom\n";
	}	
	return 0;
}