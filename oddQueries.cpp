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
        vector<long long> prefix(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            totalSum += arr[i];
            prefix[i] = totalSum; // Create the prefix sum array
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            // Calculate the range sum from l to r
            long long rangeSum = prefix[r] - prefix[l - 1];

            // Calculate the new total sum after replacing the range [l, r] with k
            long long newSum = totalSum - rangeSum + (long long)(r - l + 1) * k;

            // Check if the new sum is odd
            if (newSum % 2 != 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
