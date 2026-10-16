// https://codeforces.com/problemset/problem/1409/A

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
        int a, b;
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << "\n";
    }
    return 0;
}