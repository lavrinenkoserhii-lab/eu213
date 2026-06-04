#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int best = scores[0];
    int worst = scores[0];

    int bestCount = 0;
    int worstCount = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > best) {
            best = scores[i];
            bestCount++;
        }
        if (scores[i] < worst) {
            worst = scores[i];
            worstCount++;
        }
    }

    cout << bestCount << " " << worstCount;

    return 0;
}
