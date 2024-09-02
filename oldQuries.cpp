#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n + 1);
        long long totalSum = 0;

        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            totalSum += arr[i];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            long long rangeSum = accumulate(arr.begin() + l, arr.begin() + r + 1, 0LL);
            long long newSum = totalSum - rangeSum + (long long)(r - l + 1) * k;

            if (newSum % 2 != 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
