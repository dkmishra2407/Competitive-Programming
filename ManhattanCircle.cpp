#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> matrix(n, vector<char>(m)); // Initialize matrix

        int nhigh = 0; // Row with the highest count of '#'
        int maxCount = 0; // Maximum count of '#'
        
        for (int i = 0; i < n; i++) {
            int count = 0; // Count of '#' in the current row
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j]; // Read character into the matrix
                if (matrix[i][j] == '#') {
                    count++;
                }
            }
            // Update if current row has more '#' than previous max
            if (count > maxCount) {
                maxCount = count;
                nhigh = i + 1; // Store the 1-based index of the row
            }
        }

        // Calculate nlow based on the row with the maximum '#'
        int nlow = 0; // Position in the row with max '#'
        bool foundFirstHash = false;
        int hashCount = 0;

        for (int j = 0; j < m; j++) {
            if (matrix[nhigh - 1][j] == '#') {
                if (!foundFirstHash) {
                    nlow = j + 1; // 1-based index of the first '#'
                    foundFirstHash = true;
                }
                hashCount++;
            }
        }

        // Calculate nlow based on the number of '#' found
        if (hashCount > 0) {
            nlow = nlow + (hashCount / 2); // Adjust nlow based on the count of '#'
        }

        cout << nhigh << " " << nlow << endl;
    }
    return 0;
}