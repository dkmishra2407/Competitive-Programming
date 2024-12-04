#include <iostream>
#include <vector>
#include <string>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<char>> matrix(n, std::vector<char>(m));

    // Read the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }

    bool is_colored = false;

    // Check each pixel in the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char pixel = matrix[i][j];
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                is_colored = true;
                break;
            }
        }
        if (is_colored) {
            break;
        }
    }

    // Print the result
    if (is_colored) {
        std::cout << "#Color" << std::endl;
    } else {
        std::cout << "#Black&White" << std::endl;
    }

    return 0;
}