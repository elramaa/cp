#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m, k;
    string a, b;
    cin >> n >> m >> k >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    string c = "";
    char last_op = ' '; 
    int op = 0;
    for(int i = 0, j = 0; i < n && j < m;){
      if(op == k){
        if(last_op == 'a'){
          c += b[j++];
          last_op = 'b';
        }else if(last_op == 'b'){
          c += a[i++];
          last_op = 'a';
        }
        op = 1;
        continue;
      }
      op++;
      if(a[i] < b[j]){
        c += a[i++];
        if(last_op != 'a') op = 1;
        last_op = 'a';
      }else{
        c += b[j++];
        if(last_op != 'b') op = 1;
        last_op = 'b';
      }
    }
    cout << c << "\n";
  }
  return 0;
}
