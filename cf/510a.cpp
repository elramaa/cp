// https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i & 1 || (i % 2 == 0 && j == m && i % 4 != 0) ||
                (i % 4 == 0 && j == 1))
                cout << '#';
            else
                cout << '.';
        }
        cout << "\n";
    }
    return 0;
}