#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cin >> input;
	if(input[0] == '0') cout << "nol";
	else if(input[0] == '-') cout << "bilangan bulat negatif"; 
	else if(isdigit(input[0])) cout << "bilangan bulat positif";
	else cout << "kata";
	return 0;
}