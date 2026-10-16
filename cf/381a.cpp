// https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    vi cards(n);
    for (int i = 0; i < n; ++i) cin >> cards[i];
    int s = 0, d = 0;
    int left = 0, right = n - 1;
    for (int i = 1; i <= n; ++i) {
        if (cards[left] > cards[right]) {
            (i & 1) ? s += cards[left] : d += cards[left];
            left++;
        } else {
            (i & 1) ? s += cards[right] : d += cards[right];
            right--;
        }
    }
    cout << s << " " << d;
    return 0;
}