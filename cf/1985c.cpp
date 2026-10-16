// https://codeforces.com/problemset/problem/1985/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        ll sum = 0;
        ll maximum = 0;
        for (int i = 0; i < n; ++i) {
            ll a;
            cin >> a;
            maximum = max(a, maximum);
            sum += a;
            if (sum - maximum == maximum) count++;
        }
        cout << count << "\n";
    }
    return 0;
}