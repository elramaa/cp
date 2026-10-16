#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int S[n];
  vector<int> counter(5, 0);
  for (int i = 0; i < n; ++i) {
    cin >> S[i];
    counter[S[i]]++;
  }
  int taxi = 0;
  taxi += counter[4]; // 4 can't be paired with anyone else
  if (counter[1] <= counter[3]) {
    taxi += counter[1];              // count every pair 1 with 3 that possible
    taxi += (counter[2] + 1) / 2;    // pair two with itself, and round up
    taxi += counter[3] - counter[1]; // count every 3 that doesn't have pair
  } else {
    taxi += counter[3]; // count every 3 that paired with 1
    int one_left = counter[1] - counter[3];
    // pair two 1 with single 2
    if(counter[2] >= (one_left + 1)/2){
      taxi += (one_left + 1)/2;
      int two_left = counter[2] - (one_left + 1)/2;
      taxi += (two_left + 1)/2; 
    }else{
      taxi += counter[2];
      one_left = one_left - counter[2]*2; 
      taxi += (one_left + 3)/4;
    }
  }

  cout << taxi;
  return 0;
}
