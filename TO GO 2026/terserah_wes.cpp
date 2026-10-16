#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> nilai(N);
  int lulus = 0;
  float rata = 0;
  int sementara = 0;

  for (int i = 0; i < N; i++) {
    cin >> nilai[i];
    if (nilai[i] >= 75) {
      lulus++;
    }
    sementara += nilai[i];
  }
  rata = (float)sementara / N;
  int max_ = *max_element(nilai.begin(), nilai.end());
  cout << lulus << " ";
  cout << fixed << setprecision(2) << rata << " ";
  cout << max_;
  return 0;
}