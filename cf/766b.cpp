// https://codeforces.com/problemset/problem/766/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; ++i) {
        bool case1 = a[i] + a[i + 1] > a[i + 2] && a[i + 1] + a[i + 2] > a[i] &&
                     a[i] + a[i + 2] > a[i + 1];
        if (case1) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}