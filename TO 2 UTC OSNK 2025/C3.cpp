#include <bits/stdc++.h>
using namespace std;

bool tanma[100] = {false};
int x = 1;

void sosial(int uang, int kaya, vector<int> pana){
  if(uang == kaya){
    if(x == 3463){
      cout << x << ": ";
      for(int i = 0; i < pana.size(); ++i){
        cout << pana[i] << " ";
      }
      cout << "\n";
    }
    x++;
    return;
  }

  for(int i = 0; i < kaya; ++i){
    if(!tanma[i]){
      tanma[i] = true;
      pana.push_back(i+1);
      sosial(uang+1, kaya, pana);
      pana.pop_back();
      tanma[i] = false;
    }
  }
}

int main(){
  sosial(6, 10, {});
  return 0;
}
