// https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    vi worms(sum + 1);
    int start = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = start; j < start + a[i]; ++j) {
            worms[j] = i + 1;
        }
        start += a[i];
    }
    int m;
    cin >> m;
    while (m--) {
        int x;
        cin >> x;
        cout << worms[x] << "\n";
    }
    return 0;
}