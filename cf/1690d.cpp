// https://codeforces.com/problemset/problem/1690/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        str s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') ++count;
        }

        int best = count;
        for (int i = 1; i <= n - k; ++i) {
            if (s[i - 1] == 'W') --count;
            if (s[i + k - 1] == 'W') ++count;
            best = min(best, count);
        }
        cout << best << "\n";
    }
    return 0;
}