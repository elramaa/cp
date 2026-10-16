// https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        dragons[i] = {x, y};
    }
    // the idea is, select lowest x with the highest y, but how?
    // sort the x, it's guaranteed if Kirito kill the xi dragon, he will be
    // stronger, and there is no need to select lowest x with highest y, just
    // the lowest x is enough to determine if he will win
    // sort the x first,
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (dragons[j].first > dragons[j + 1].first) {
                swap(dragons[j], dragons[j + 1]);
            }
        }
    }
    // try to defeat from the lowest x
    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}