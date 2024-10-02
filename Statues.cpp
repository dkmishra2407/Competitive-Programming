#include <iostream>
#include <string>
#include <vector>

const int N = 8;
int drow[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1}; // Movement directions row-wise
int dcol[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1}; // Movement directions column-wise
std::vector<std::string> initialState(N);

// DFS function to check if we can survive and reach (0, 7)
bool dfs(int inrow, int incol, int step) {
    // If step exceeds 8, we have survived long enough and can safely reach the target
    if (step > N) {
        return true;
    }

    // Check all 9 possible movements from the current position
    for (int p = 0; p < 9; p++) {
        int row = inrow + drow[p];  // Calculate new row position
        int col = incol + dcol[p];  // Calculate new column position
        
        // Check if the position is out of bounds
        if (row < 0 || row >= N || col < 0 || col >= N) {
            continue;
        }

        // Check if this position is blocked by an obstacle 'S'
        if (row >= step && initialState[row - step][col] == 'S') {
            continue;
        }

        // Check if the obstacle would move down and block this position
        if (row > step && initialState[row - step - 1][col] == 'S') {
            continue;
        }

        // Perform DFS recursively from the new position
        if (dfs(row, col, step + 1)) {
            return true;  // If a valid path is found, return true
        }
    }
    return false;
}

int main() {
    for (int p = 0; p < N; p++) {
        getline(std::cin, initialState[p]);
    }

    std::cout << (dfs(7, 0, 0) ? "WIN" : "LOSE") << std::endl;

    return 0;
}
