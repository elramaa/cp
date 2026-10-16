// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    int faces = 0;
    while (n--) {
        str s;
        cin >> s;
        if (s == "Tetrahedron")
            faces += 4;
        else if (s == "Cube")
            faces += 6;
        else if (s == "Octahedron")
            faces += 8;
        else if (s == "Dodecahedron")
            faces += 12;
        else if (s == "Icosahedron")
            faces += 20;
    }
    cout << faces;
    return 0;
}