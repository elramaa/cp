// https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;
using vc = vector<char>;

int main() {
    int n;
    cin >> n;
    int polices = 0;
    int untreated = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x != -1)
            polices += x;
        else
            polices > 0 ? polices-- : untreated++;
    }
    cout << untreated;
    return 0;
}