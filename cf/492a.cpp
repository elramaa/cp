// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 1;; ++i) {
        total += i * (i + 1) / 2;
        if (total > n) {
            cout << i - 1;
            break;
        }
    }
    return 0;
}