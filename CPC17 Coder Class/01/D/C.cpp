#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n/2; ++i){
        cin >> A[i];
        cin >> A[n-1-i];
    }
    if(n % 2 != 0) cin >> A[n/2];
    for(int i = 0; i < n; ++i){
        cout << A[i] << " ";
    }
    return 0;
}
