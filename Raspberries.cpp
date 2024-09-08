#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int ans = INT_MAX;
    int count = 0;

    for (auto &i : v) {
        cin >> i;

        if (i % k == 0) {
            ans = 0;
        } else {
            ans = min(k - i % k, ans);
        }

        if (i % 2 == 0) {
            count++;
        }
    }

    if (k == 4) {
        ans = min (ans, (2-min (2,count)));
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
