#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	str s;
	cin >> n >> s;
	map<char, int> cmap;
	for(int i = 0; i < n; ++i){
		if(!cmap.count(s[i])) cmap[s[i]] = 1;
		else cmap[s[i]]++;
		int oddCount = 0;
		int evenCount = 0;
		for(auto [key, value]: cmap){
			if(value & 1) oddCount++;
			else evenCount++;
		}
		bool isPalindrome = !(oddCount > 1);
		cout << (isPalindrome ? 1 : i+1) << " ";
	}
	return 0;
}