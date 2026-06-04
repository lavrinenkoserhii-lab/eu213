#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int lcm_val = a[0];
    for (int i = 1; i < n; i++) {
        lcm_val = lcm(lcm_val, a[i]);
    }

    int gcd_val = b[0];
    for (int i = 1; i < m; i++) {
        gcd_val = gcd(gcd_val, b[i]);
    }

    int count = 0;

    for (int x = lcm_val; x <= gcd_val; x += lcm_val) {
        if (gcd_val % x == 0) {
            count++;
        }
    }

    cout << count;

    return 0;
}
