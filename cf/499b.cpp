// https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n, m;
    cin >> n >> m;
    map<str, str> words;
    while (m--) {
        str a, b;
        cin >> a >> b;
        words[a] = b;
    }
    while (n--) {
        str word;
        cin >> word;
        if (word.size() > words[word].size())
            cout << words[word];
        else
            cout << word;
        cout << " ";
    }
    return 0;
}