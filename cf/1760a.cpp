// https://codeforces.com/problemset/problem/1760/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vi x(3);
        for (int i = 0; i < 3; ++i) cin >> x[i];
        sort(x.begin(), x.end());
        cout << x[1] << "\n";
    }
    return 0;
}