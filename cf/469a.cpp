// https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, px, py;
    set<int> levels;
    cin >> n;
    cin >> px;
    for (int i = 0; i < px; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }
    cin >> py;
    for (int i = 0; i < py; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }
    if (int(levels.size()) == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}