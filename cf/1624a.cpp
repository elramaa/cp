// https://codeforces.com/problemset/problem/1624/A

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
        int high = 0, low = INT32_MAX;
        while (n--) {
            int x;
            cin >> x;
            high = max(high, x);
            low = min(low, x);
        };
        cout << high - low << "\n";
    }
    return 0;
}