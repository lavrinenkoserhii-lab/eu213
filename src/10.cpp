#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int leftDiag = 0;
    int rightDiag = 0;

    for (int i = 0; i < n; i++) {
        leftDiag += arr[i][i];
        rightDiag += arr[i][n - i - 1];
    }

    cout << abs(leftDiag - rightDiag);

    return 0;
}
