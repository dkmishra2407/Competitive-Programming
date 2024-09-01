#include <iostream>
#include <string>

using namespace std;

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int countLuckyDigits(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    int count = countLuckyDigits(s);
    if (isLucky(count)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}