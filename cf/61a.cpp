// https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    str a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            cout << '1';
        else
            cout << '0';
    }
    return 0;
}