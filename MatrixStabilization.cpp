#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    bool changed;
    do {
        changed = false;
        vector<vector<int>> newVec = vec; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int mx = 0;
                if (i != 0) mx = max(mx, vec[i - 1][j]); // Up
                if (j != 0) mx = max(mx, vec[i][j - 1]); // Left
                if (i != n - 1) mx = max(mx, vec[i + 1][j]); // Down
                if (j != m - 1) mx = max(mx, vec[i][j + 1]); // Right
                
                if (vec[i][j] > mx) {
                    newVec[i][j] = mx; // Set to the maximum of neighbors
                    changed = true; // Mark that a change has occurred
                }
            }
        }
        
        vec = newVec; // Update the original matrix with new values

    } while (changed); // Repeat until no changes occur

    // Output the stabilized matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}