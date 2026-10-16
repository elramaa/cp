// https://codeforces.com/problemset/problem/1141/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, m;
    cin >> n >> m;
    int MULT = m / n;
    int x = MULT;
    int moves2 = 0;
    int moves3 = 0;
    while (x % 2 == 0) {
        x /= 2;
        moves2++;
    }
    while (x % 3 == 0) {
        x /= 3;
        moves3++;
    }
    if (pow(2, moves2) * pow(3, moves3) * n == m) {
        cout << moves2 + moves3;
    } else {
        cout << -1;
    }
    return 0;
}