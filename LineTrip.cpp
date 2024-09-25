#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        cin >> x;
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            cin >> ans[i];
        }

        int prev = 0;
        int maxDiff = 0;

        for(int i = 0; i < n; i++) {
            maxDiff = max(maxDiff, ans[i] - prev);
            prev = ans[i];
        }

        maxDiff = max(maxDiff, 2 * (x - ans[n - 1]));

        cout << maxDiff << endl;
    }
    return 0;
}