#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	string s; int index;
	cin >> s >> index;
	// vector<double> avgs;
	set<char> tracked;
	map<char, int> sums;
	map<char, int> counts;
	for(int i = 0; i < s.length(); ++i){
		if(s[i] == '_') continue;
		if(!tracked.count(s[i])){
			sums[s[i]] = 0;
			counts[s[i]] = 0;
			tracked.insert(s[i]);
		}
		counts[s[i]]++;
		sums[s[i]] += i;
	}
	double closer = INT32_MAX;
	for(auto [c, sum]: sums){
		double avg = (double)sum/counts[c];
		closer = min(closer, abs(index-avg));
	}
	cout << s[(int)closer+index];
	return 0;
}