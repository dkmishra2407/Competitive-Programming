#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n + 1, 0);
    vector<long long> operations(m + 1, 0);
    vector<tuple<int, int, int>> ops(m + 1);

    // Read initial array
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Read operations
    for (int i = 1; i <= m; i++) {
        int l, r, d;
        cin >> l >> r >> d;
        ops[i] = make_tuple(l, r, d);
    }
    while (k--) {
        int x, y;
        cin >> x >> y;
        operations[x]++;
        if (y + 1 <= m) operations[y + 1]--;
    }

    for (int i = 1; i <= m; i++) {
        operations[i] += operations[i - 1];
    }
    vector<long long> delta(n + 2, 0);
    for (int i = 1; i <= m; i++) {
        int l, r, d;
        tie(l, r, d) = ops[i];
        delta[l] += operations[i] * d;
        if (r + 1 <= n) delta[r + 1] -= operations[i] * d;
    }
    for (int i = 1; i <= n; i++) {
        delta[i] += delta[i - 1];
        a[i] += delta[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}