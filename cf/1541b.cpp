#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    // from the description, we know that each value of a will be in range of 1 to 2n
    vector<int> A(2*n+1, -1); // the value of A[i] will be the index, while i is the number itself
    for(int i = 1; i <= n; ++i){
      int x;
      cin >> x;
      A[x] = i; // we mark the number with the index, else it'll be -1
    }
    // We need to find the pair where i+j = A[i] * A[j], (the sum of index equal to the value of the 2 value multiplications)
    // But since we flip it, we need to find pair where A[i] + A[j] = i * j
    // We know that a number can be represented as 2 numbers multiplied, so we can find the factor of the numbers
    // Since the smallest number that's possible is 1+2 as the index start from 1, the maximum will be n + (n-1) because there are n numbers
    int c = 0;
    for(int x = 3; x <= n + (n-1); ++x){
      for(int i = 1; i*i <= x; ++i){ // we can stop to sqrt(x) because after that it just flip overs
        // Here x represent the sum of 2 index or 2 numbers multiplied 
        // x / i represent j or the pair of i
        // We need to ignore i^2 because all the numbers are distinct, so we can't form two same numbers multiplied
        if(x % i == 0 && i*i != x && A[i] != -1 && A[x / i] != -1 && A[i] + A[x/i] == x) c++;
      }
    }
    cout << c << "\n";
  }
  return 0;
}
