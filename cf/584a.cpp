// https://codeforces.com/problemset/problem/584/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10) {
        // it's not possible to print multiple of 10 in 1 digit
        cout << -1;
        return 0;
    }

    cout << t;
    if (t == 10) {
        while (n > 2) {
            cout << 0;
            n--;
        }
    } else {
        while (n > 1) {
            cout << 0;
            n--;
        }
    }
    return 0;
}