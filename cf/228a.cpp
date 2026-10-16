// https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> s{s1, s2, s3, s4};
    cout << 4 - int(s.size());
    return 0;
}