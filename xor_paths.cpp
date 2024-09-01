#include <bits/stdc++.h>
using namespace std;

long long countPaths(int i, int j, int n, int m, long long currentXor, long long k, vector<vector<long long>>& arr, vector<vector<vector<long long>>>& dp) {
    if (i == n - 1 && j == m - 1) {
        return (currentXor ^ arr[i][j]) == k ? 1 : 0;
    }
    if (i >= n || j >= m) {
        return 0;
    }

    // Check memoization table
    if (dp[i][j][currentXor] != -1) {
        return dp[i][j][currentXor];
    }

    // Update current XOR with the current cell value
    long long newXor = currentXor ^ arr[i][j];
    
    // Explore moving down and right
    long long paths = countPaths(i + 1, j, n, m, newXor, k, arr, dp) + countPaths(i, j + 1, n, m, newXor, k, arr, dp);
    
    // Store result in memoization table
    return dp[i][j][currentXor] = paths;
}

int main() {
    int n, m;
    long long k;
    cin >> n >> m >> k;

    vector<vector<long long>> arr(n, vector<long long>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Initialize dp with -1
    vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(m, vector<long long>(65, -1))); // 65 for possible XOR values
    long long result = countPaths(0, 0, n, m, 0, k, arr, dp);
    
    cout << result << endl;
    return 0;
}