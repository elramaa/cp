// https://codeforces.com/problemset/problem/579/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int x;
    cin >> x;
    int minimum = 0;
    while (x != 0) {
        if (x & 1) {
            minimum++;
        }
        x /= 2;
    }
    cout << minimum;
    return 0;
}