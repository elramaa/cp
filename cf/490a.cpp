// https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    vector<int[3]> teams(n);
    int top1, top2, top3;
    top1 = top2 = top3 = 0;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        if (t == 1)
            teams[top1++][0] = i;
        else if (t == 2)
            teams[top2++][1] = i;
        else if (t == 3)
            teams[top3++][2] = i;
    }
    int w = min({top1, top2, top3});
    cout << w << "\n";
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < 3; ++j) cout << teams[i][j] << " ";
        cout << "\n";
    }
    return 0;
}