#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using vi = vector<int>;

int main() {
    int n;
    cin >> n;
    int hosts[n], guests[n];
    for (int i = 0; i < n; ++i) cin >> hosts[i] >> guests[i]; 
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            if (hosts[i] == guests[j]) ++count;
        }
    }
    cout << count;
    return 0;
}
