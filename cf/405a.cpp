// https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, maxCube;
    cin >> n;

    vi a(n);
    cin >> a[0];
    maxCube = a[0];

    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        if (a[i] > maxCube) maxCube = a[i];
    }

    for (int i = n; i > 0; --i) {
        for (int j = 0; j < i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                int init = a[j + 1];
                a[j + 1] += a[j] - a[j + 1];
                a[j] -= a[j] - init;
            }
        }
    }

    for (int box : a) cout << box << " ";

    return 0;
}