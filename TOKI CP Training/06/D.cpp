#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  int W[n], C[n];
  pair<double, int> A[n]; // first -> c/w, second -> index
  for(int i = 0; i < n; ++i) cin >> W[i];
  for(int i = 0; i < n; ++i) cin >> C[i];
  for(int i = 0; i < n; ++i){
    A[i] = {(double)C[i]/W[i], i};
  }
  sort(A, A+n);
  double total_cost = 0;
  for(int i = n-1; i >= 0 && x > 0; --i){
    double cost_per_sack = A[i].first;
    int weight = W[A[i].second];
    int cost = C[A[i].second];

    int affordable = min(x, weight);
    x -= affordable;
    total_cost += (double)cost_per_sack*affordable;
  }
  cout << fixed << setprecision(5) << total_cost;
  return 0;
}
