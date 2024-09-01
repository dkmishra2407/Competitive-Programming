#include <bits/stdc++.h>
using namespace std;

const int TARGET_PRODUCT = 2023;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, rem = 2023, possible = 1; cin >> n >> k;
 
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            possible &= (rem % x == 0);
            rem /= x;
        }
 
        if(!possible) cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << rem << " ";
            for(int i = 1; i < k; i++) cout << 1 << " ";
            cout << "\n";
        }
    }

    return 0;
}