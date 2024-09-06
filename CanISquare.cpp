#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long x) {
    long long s = sqrt(x);
    return (s * s == x);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long totalSquares = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalSquares += a[i];  // Sum of all squares in the test case
        }

        // Check if the total number of squares is a perfect square
        if (isPerfectSquare(totalSquares)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
