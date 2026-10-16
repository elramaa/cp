#include <bits/stdc++.h>
using namespace std;

int count_day(int a, int b, int c, int d){
	if(a == 0 && c == 0) return ceil((double)(b+d)/3);
	if(b == 0 && d == 0) return ceil((double)(a+c)/3);
	if(b == 0 && c == 0) return ceil((double)(a+d)/3);
	return ceil((double)a/3) + ceil((double)(b+c)/3) + ceil((double)d/3);
}

int main(){
	long a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << count_day(a,b,c,d);
	return 0;
}