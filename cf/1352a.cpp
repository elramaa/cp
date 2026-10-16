// https://codeforces.com/problemset/problem/1352/A

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
        int n;
        cin >> n;
        int k = 0;
        for (int i = n; i > 0; i /= 10) {
            if (i % 10 != 0) ++k;
        }
        cout << k << "\n";
        for (int i = n, j = 1; i > 0; i /= 10, j *= 10) {
            if (i % 10 != 0) {
                cout << (i % 10) * j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}