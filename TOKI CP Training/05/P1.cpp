#include <bits/stdc++.h>
using namespace std;

void search(int l, int r){
  if(l == r){
    cout << "! " << l;
    return;
  }
  int mid = (l+r)/2;
  cout << "?\n";
  for(int i = l; i <= mid; ++i) cout << i << " ";
  cout << "\n";
  for(int i = mid + 1; i <= r; ++i) cout << i << " ";
  cout << "\n";
  string guess;
  cin >> guess;
  cout << flush;
  if(guess == "KIRI"){
    search(l, mid);
  }else if(guess == "KANAN"){
    search(mid + 1, r);
  }
}

int main(){
  search(1, 8);
  return 0;
}
