// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    int maxh, minh, maxh_i, minh_i;

    int x;
    cin >> x;
    maxh = minh = x;
    maxh_i = minh_i = 0;

    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        if (x > maxh) {
            maxh = x;
            maxh_i = i;
        }
        if (x <= minh) {
            minh = x;
            minh_i = i;
        }
    }

    int out = maxh_i + (n - (minh_i + 1));
    if (maxh_i > minh_i) out--;
    cout << out;

    return 0;
}