// https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    int m_win, c_win;
    m_win = c_win = 0;
    while (n--) {
        int m, c;
        cin >> m >> c;
        if (m > c)
            m_win++;
        else if (c > m)
            c_win++;
    }
    if (m_win > c_win)
        cout << "Mishka";
    else if (c_win > m_win)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}