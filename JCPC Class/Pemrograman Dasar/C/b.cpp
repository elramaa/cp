#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, x;
	int step = 0;
	cin >> a >> b >> c >> x;
	int y = x;
	do{
		x = (a*x + b) % c;
		++step;
	}while(x != y);
	cout << step;
	return 0;
}