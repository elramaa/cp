// https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n, m;
    cin >> n >> m;
    int next_prime;
    for (int i = n + 1; i <= m; ++i) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            next_prime = i;
            break;
        }
    }
    if (next_prime == m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}