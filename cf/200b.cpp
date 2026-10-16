// https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    double total_drink;
    for (int i = 0; i < n; ++i) {
        int drink;
        cin >> drink;
        total_drink += (double)drink / 100;
    }
    cout << fixed << total_drink / (double)n * 100 << "\n";
    return 0;
}