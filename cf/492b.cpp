// https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n, l;
    cin >> n >> l;
    int max_gap = 0;
    vi lanterns(n);
    for (int i = 0; i < n; ++i) cin >> lanterns[i];
    sort(lanterns.begin(), lanterns.end());
    for (int i = 0; i < n - 1; ++i)
        max_gap = max(lanterns[i + 1] - lanterns[i], max_gap);
    cout << fixed << setprecision(9)
         << max({(double)lanterns[0], (double)max_gap / 2,
                 (double)l - lanterns[n - 1]});
    return 0;
}