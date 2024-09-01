#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> matrix(n, vector<char>(m));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        int changes = 0;
        
        for (int j = 0; j < m - 1; ++j) {
            if (matrix[n-1][j] != 'R') {
                changes++;
            }
        }
        
        for (int i = 0; i < n - 1; ++i) {
            if (matrix[i][m-1] != 'D') {
                changes++;
            }
        }

        cout << changes << endl;
    }
    return 0;
}
