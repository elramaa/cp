#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, l, r;
    cin >> n >> m >> l >> r;
    str s[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    for (int j = 0; j < m; ++j) {
        if (j + 1 >= l && j + 1 <= r)
            cout << s[0][j];
        else
            cout << '*';
    }
    cout << "\n";
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (j + 1 >= l && j + 1 <= r)
                cout << s[i + 1][j];
            else
                cout << s[i][j];
        }
        cout << "\n";
    }
    for (int j = 0; j <= m; ++j) {
        if (j + 1 < l || j + 1 > r)
            cout << s[n - 1][j];
        else
            cout << '*';
    }
    return 0;
}