#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 2;
    int m = 3;
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    // Rotate 90 degree
    int temp = n;
    n = m;
    m = temp;
    vector<vector<int>> B(n);
    for (int i = 0; i < n; ++i) {
        B[i] = {};
        for (int j = m - 1; j >= 0; --j) {
            B[i].push_back(A[j][i]);
        }
    }
    A = B;
    // Cout vector
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
