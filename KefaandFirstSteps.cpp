#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        std::cin >> sequence[i];
    }

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (sequence[i] >= sequence[i - 1]) {
            currentLength++;
        } else {
            maxLength = std::max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    maxLength = std::max(maxLength, currentLength);

    std::cout << maxLength << std::endl;

    return 0;
}