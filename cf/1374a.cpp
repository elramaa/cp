// https://codeforces.com/problemset/problem/1374/A

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
        int x, y, n;
        cin >> x >> y >> n;
        int multiple = (n / x) * x;  // multiple of x that closest to n
        int k;
        if (multiple + y <= n)
            k = multiple + y;
        else if (multiple + y > n)
            k = multiple - x + y;
        cout << k << "\n";
    }
    return 0;
}