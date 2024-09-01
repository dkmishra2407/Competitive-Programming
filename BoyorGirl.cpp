#include <iostream>
#include <set>
#include <string>

int main() {
    std::string userName;
    std::cin >> userName;

    std::set<char> distinctChars;

    for (char c : userName) {
        distinctChars.insert(c);
    }

    if (distinctChars.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}
