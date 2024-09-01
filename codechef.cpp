#include <bits/stdc++.h>
using namespace std;

string str;

bool solve(int i, int j, int x, int y, int k) {
    // Base case: If the current position matches the target position
    if (i == x && j == y) {
        return true;
    }
    
    // Base case: If we have exhausted the string
    if (k >= str.length()) {
        return false;
    }

    bool result = false;

    // Check each possible move according to the current character in the string
    if (str[k] == 'U') {
        result = solve(i - 1, j, x, y, k + 1);
    } 
    else if (str[k] == 'D') {
        result = solve(i + 1, j, x, y, k + 1);
    } 
    else if (str[k] == 'L') {
        result = solve(i, j - 1, x, y, k + 1);
    } 
    else if (str[k] == 'R') {
        result = solve(i, j + 1, x, y, k + 1);
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        cin >> str;

        // Start from position (0, 0)
        if (solve(0, 0, x, y, 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
