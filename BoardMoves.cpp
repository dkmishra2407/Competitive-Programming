#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>>& ans, int n) {
    // Base case: if we go out of bounds
    if (i < 0 || j < 0 || i >= n || j >= n || ans[i][j]) {
        return 0; // No valid moves
    }

    // Mark the cell as visited
    ans[i][j] = 1;

    // Count this cell
    int count = 1;

    // Directions for movement: right, down, left, up, right-up, right-down, left-up, left-down
    int delrow[] = {0, 1, 0, -1, -1, 1, -1, 1};
    int delcol[] = {1, 0, -1, 0, 1, 1, -1, -1};

    // Explore all eight directions
    for (int d = 0; d < 8; d++) {
        count += solve(i + delrow[d], j + delcol[d], ans, n);
    }

    return count; // Return the count of cells visited
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> ans(n, vector<int>(n, 0));

        // Start solving from the top-left corner (0, 0)
        int result = solve(0, 0, ans, n);
        
        // Output the result
        cout <<result << endl;
    }
    return 0;
}