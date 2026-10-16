// https://codeforces.com/problemset/problem/476/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, m;
    cin >> n >> m;
    // (n + 1) / 2 is the smallest possible moves
    for (int i = (n + 1) / 2; i <= n; ++i) {
        if (i % m == 0) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}