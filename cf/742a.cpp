// https://codeforces.com/problemset/problem/742/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    // the last digit of pow(1378, n)
    // equal to the last digit of 2^3n
    // 2^1 = 2
    // 2^2 = 4
    // 2^3 = 8
    // 2^4 = 16
    // 2^5 = 32
    int m = (3 * (n % 4)) % 4;
    if (n == 0)
        cout << 1;
    else if (m == 0)
        cout << 6;
    else if (m == 1)
        cout << 2;
    else if (m == 2)
        cout << 4;
    else if (m == 3)
        cout << 8;
    return 0;
}