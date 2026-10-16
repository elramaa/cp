// https://codeforces.com/problemset/problem/1367/B

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
        int n, odd, even, incorrect;
        cin >> n;
        // int odd = (n+1)/2;
        // int even = n/2;
        odd = even = incorrect = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x & 1)
                odd++;
            else
                even++;
            if (!(i % 2 == x % 2)) incorrect++;
        }
        if (even != (n + 1) / 2 && odd != n / 2)
            cout << -1 << "\n";
        else
            cout << incorrect / 2 << "\n";
    }
    return 0;
}