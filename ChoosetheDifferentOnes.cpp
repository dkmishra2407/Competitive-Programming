#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0);
#define int long long // Assuming you want to handle larger integers

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    set<int> a, b, ans;

    // Read first sequence and store unique values
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.insert(x);
    }

    // Read second sequence and store unique values
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        b.insert(x);
    }

    int ct1 = 0, ct2 = 0;

    // Count unique elements in set 'a' that are <= k
    for (auto x : a) {
        if (x <= k) {
            ct1++;
            ans.insert(x);
        }
    }

    // Count unique elements in set 'b' that are <= k
    for (auto x : b) {
        if (x <= k) {
            ct2++;
            ans.insert(x);
        }
    }

    // Check conditions for output
    if (ans.size() >= k && ct1 >= k / 2 && ct2 >= k / 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--) 
        solve();
    return 0;
}
