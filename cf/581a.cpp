// https://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << abs(a - b) / 2;
    return 0;
}