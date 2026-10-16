#include <bits/stdc++.h>
using namespace std;

int remove_full_row(vector<string> &M, int r, int c){
  int last_removed_row = -1;
  for(int i = 0; i < r; ++i){
    int fill_cnt = 0;
    for(int j = 0; j < c; ++j){
      if(M[i][j] == '1') fill_cnt++;
    }
    if(fill_cnt == c){
      last_removed_row = i;
      for(int j = 0; j < c; ++j) M[i][j] = '0';
    }
  }
  return last_removed_row; 
  // return -1 if there is no full row that removed, else return the index of the row
}

int main(){
  int r, c; cin >> r >> c;
  vector<string> M(r);
  vector<int> top_empty_row(c);
  for(int i = 0; i < r; ++i) cin >> M[i];
  int last_removed_row = -1;
  do{
    last_removed_row = remove_full_row(M, r, c);
    if(last_removed_row == -1) break;
    for(int i = 0; i < c; ++i){
      for(int j = last_removed_row; j >= 0; --j){
        if(M[j][i] == '1'){
          for(int k = j; k < r-1; ++k){
            if(M[k+1][i] != '0') break;
            swap(M[k+1][i], M[k][i]);
          }
        }
      }
    }
  }while(last_removed_row != -1);
  for(int i = 0; i < r; ++i) cout << M[i] << "\n";
  return 0;
}
