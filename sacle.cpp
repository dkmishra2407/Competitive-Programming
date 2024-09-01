#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n, k;
        cin >> n >> k; // Read dimensions and reduction factor
        vector<string> grid(n); // Vector to store the grid

        // Read the grid
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        // Calculate the size of the reduced grid
        int reduced_size = n / k;
        vector<string> reduced_grid(reduced_size, string(reduced_size, ' '));

        // Fill the reduced grid
        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                // Since all cells in the k x k block are the same, we can take the value from the top-left cell
                char value = grid[i][j];
                reduced_grid[i / k][j / k] = value; // Place the value in the reduced grid
            }
        }

        // Output the reduced grid
        for (const auto& row : reduced_grid) {
            cout << row << endl;
        }
    }
    return 0;
}