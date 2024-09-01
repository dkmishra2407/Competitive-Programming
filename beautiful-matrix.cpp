#include <bits/stdc++.h>
using namespace std;

int f(int row, int col, int arr[][5], int n, vector<vector<int>> &vis) {
    if (row == n - 1 && col == n - 1) {
        return 0;
    }

    if (row < 0 || col < 0 || row >= n || col >= n || vis[row][col] || arr[row][col] == 0) {
        return INT_MAX;
    }

    vis[row][col] = 1;

    int up = f(row - 1, col, arr, n, vis);
    int down = f(row + 1, col, arr, n, vis);
    int right = f(row, col + 1, arr, n, vis);
    int left = f(row, col - 1, arr, n, vis);

    vis[row][col] = 0;

    return 1 + min({up, down, left, right});
}

int main() {
    const int n = 5;
    int row, col;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    vector<vector<int>> vis(n, vector<int>(n, 0));
    int result = f(row, col, arr, n, vis);

    if (result >= INT_MAX) {
        cout << "No path found" << endl;
    } else {
        cout << "Shortest path length: " << result << endl;
    }

    return 0;
}
