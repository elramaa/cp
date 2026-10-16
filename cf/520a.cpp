// https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> letters;
    for (char c : s) letters.insert(tolower(c));
    if (int(letters.size()) == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}