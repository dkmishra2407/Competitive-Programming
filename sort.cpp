#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n, q;
        cin >> n >> q; // Read the length of the strings and number of queries
        
        string a, b;
        cin >> a >> b; // Read the two strings

        // Create prefix sum arrays for character counts
        vector<vector<int>> prefixA(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefixB(n + 1, vector<int>(26, 0));

        // Fill the prefix sums for string a
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                prefixA[i + 1][j] = prefixA[i][j];
            }
            prefixA[i + 1][a[i] - 'a']++;
        }

        // Fill the prefix sums for string b
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                prefixB[i + 1][j] = prefixB[i][j];
            }
            prefixB[i + 1][b[i] - 'a']++;
        }

        // Process each query
        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r; // Read the range for the query
            l--; r--; // Convert to 0-based index

            // Count characters in the range a[l..r] and b[l..r]
            vector<int> countA(26, 0), countB(26, 0);
            for (int j = 0; j < 26; ++j) {
                countA[j] = prefixA[r + 1][j] - prefixA[l][j]; // Count in a
                countB[j] = prefixB[r + 1][j] - prefixB[l][j]; // Count in b
            }

            // Calculate the number of changes needed
            int changes = 0;
            for (int j = 0; j < 26; ++j) {
                changes += abs(countA[j] - countB[j]); // Difference in counts
            }

            // Since each change can fix one character, we divide by 2
            cout << changes / 2 << endl;
        }
    }
    return 0;
}