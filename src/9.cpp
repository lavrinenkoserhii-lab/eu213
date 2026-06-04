#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int pairs = 0;

    for (auto &p : freq) {
        pairs += p.second / 2;
    }

    cout << pairs;

    return 0;
}
