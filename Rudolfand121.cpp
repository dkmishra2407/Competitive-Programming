#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> ans(n);
        
        for (int i = 0; i < n; i++) {
            cin >> ans[i];
        }
        
        bool possible = true;

        for (int i = 1; i < n - 1; i++) {
            if (min(ans[i - 1], ans[i + 1]) * 2 > ans[i]) {
                possible = false;
                break;
            }
            int minVal = min(ans[i - 1], ans[i + 1]);
            ans[i] -= 2 * minVal;
            ans[i - 1] -= minVal;
            ans[i + 1] -= minVal;
        }

        for (int i = 0; i < n; i++) {
            if (ans[i] != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
