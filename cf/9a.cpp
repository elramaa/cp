// https://codeforces.com/problemset/problem/9/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    int y, w;
    cin >> y >> w;
    int numer = 7 - max(y, w);
    int denom = 6;
    int divisor = gcd(numer, denom);
    cout << numer / divisor << '/' << denom / divisor;
    return 0;
}