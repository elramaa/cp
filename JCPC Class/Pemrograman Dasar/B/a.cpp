#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	char opr;
	cin >> a >> opr >> b;
	if(opr == '+') cout << a + b;
	if(opr == '-') cout << a - b;
	if(opr == '/') cout << a / b;
	if(opr == '*') cout << a * b;
	if(opr == '%') cout << a % b;
	return 0;
}