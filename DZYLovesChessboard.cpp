#include <iostream>
#include <vector>

// Function to read a matrix of characters from the input
std::vector<std::vector<char>> readMatrix(int n, int m) {
    std::vector<std::vector<char>> matrix(n, std::vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }
    return matrix;
}

// Function to modify the matrix by replacing non-'-' characters with 'B' or 'W'
std::vector<std::vector<char>> modifyMatrix(const std::vector<std::vector<char>>& matrix) {
    std::vector<std::vector<char>> modifiedMatrix = matrix;
    bool flag = true;
    for (int i = 0; i < modifiedMatrix.size(); i++) {
        for (int j = 1; j <= modifiedMatrix[i].size(); j++) {
            if (modifiedMatrix[i][j] != '-') {
                modifiedMatrix[i][j] = 'B';
                if(modifiedMatrix[i][j] == modifiedMatrix[i][j-1] ){
                 modifiedMatrix[i][j-1] = 'W';
            }
            }
        }
    }
    return modifiedMatrix;
}

// Function to print a matrix of characters
void printMatrix(const std::vector<std::vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char c : row) {
            std::cout << c;
        }
        std::cout << std::endl;
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;

    if (n <= 0 || m <= 0) {
        std::cerr << "Error: Invalid matrix dimensions." << std::endl;
        return 1;
    }

    std::vector<std::vector<char>> matrix = readMatrix(n, m);
    std::vector<std::vector<char>> modifiedMatrix = modifyMatrix(matrix);
    printMatrix(modifiedMatrix);

    return 0;
}