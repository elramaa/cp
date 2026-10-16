#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; 
  cin >> N;
  int UTC[N+1] = {0};
  set<int> out;
  UTC[1] = 1;
  int pc = 0;
  for(int tanma = 1; tanma <= N; ++tanma){
    int pana = 2;
    while(tanma * pana <= N){
      UTC[tanma * pana] += UTC[tanma];
      pana++;
    }
    // if(UTC[tanma] == 1) cout << tanma << "\n";
  }
  for(int i = 0; i <= N; i++) out.insert(UTC[i]);
  for(int x: out){
    cout << x << " ";
  }
  cout << "\n";
  cout << out.size();
  // cout << UTC[N];
  // cout << pc;
  return 0;
}
