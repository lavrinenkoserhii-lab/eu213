#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> freq(6, 0);

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int bestType = 1;
    int bestCount = freq[1];

    for (int i = 2; i <= 5; i++) {
        if (freq[i] > bestCount) {
            bestCount = freq[i];
            bestType = i;
        }
    }

    cout << bestType;

    return 0;
}
