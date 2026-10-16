// https://codeforces.com/problemset/problem/43/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    map<str, int> teams;
    while (n--) {
        str team;
        cin >> team;
        if (teams[team]) {
            teams[team]++;
        } else {
            teams[team] = 1;
        }
    }
    pair<str, int> best{"", 0};
    for (auto it = teams.begin(); it != teams.end(); ++it) {
        if (best.second < it->second) {
            best = {it->first, it->second};
        }
    }
    cout << best.first;
    return 0;
}