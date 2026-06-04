#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (v1 == v2) {
        if (x1 == x2) cout << "YES";
        else cout << "NO";
        return 0;
    }

    int num = x2 - x1;
    int den = v1 - v2;

    if (den != 0 && num % den == 0 && num / den >= 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
