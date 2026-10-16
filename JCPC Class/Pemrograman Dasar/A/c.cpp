#include <bits/stdc++.h>
using namespace std;

int main(){
	double sum = 0;
    for(int i = 0; i < 6; ++i){
        float n;
        cin >> n;
		sum += n;
    }
    cout << fixed << sum / 6.0;
	return 0;
}