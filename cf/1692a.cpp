// https://codeforces.com/problemset/problem/1692/A

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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int n = int(b > a) + int(c > a) + int(d > a);
        cout << n << "\n";
    }
    return 0;
}