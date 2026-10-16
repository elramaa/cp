// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            cout << "I hate ";
        else
            cout << "I love ";
        if (i != n) cout << "that ";
    }
    cout << "it";
    return 0;
}