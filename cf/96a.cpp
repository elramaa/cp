// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    str players;
    cin >> players;
    char prev_p = players[0];
    int adjacent = 1;
    for (int i = 1; i < int(players.size()); ++i) {
        if (players[i] == prev_p)
            adjacent++;
        else {
            prev_p = players[i];
            adjacent = 1;
        }
        if (adjacent >= 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}