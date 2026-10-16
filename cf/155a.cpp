// https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int worst = x;
    int best = x;
    int amazing = 0;
    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        if (x > best) {
            ++amazing;
            best = x;
        } else if (x < worst) {
            ++amazing;
            worst = x;
        }
    }
    cout << amazing;
    return 0;
}