// https://codeforces.com/problemset/problem/1399/A

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
        vi a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int longest = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; ++i) {
            longest = max(longest, a[i + 1] - a[i]);
        }
        if (longest > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}