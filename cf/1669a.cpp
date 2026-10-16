// https://codeforces.com/problemset/problem/1669/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int rating;
        cin >> rating;
        if (rating <= 1399)
            cout << "Division 4";
        else if (rating <= 1599)
            cout << "Division 3";
        else if (rating <= 1899)
            cout << "Division 2";
        else
            cout << "Division 1";
        cout << "\n";
    }
    return 0;
}