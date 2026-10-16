// https://codeforces.com/problemset/problem/577/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, x;
    cin >> n >> x;
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (x % i == 0 && x / i <= n) ++count;
    }
    cout << count;
    return 0;
}