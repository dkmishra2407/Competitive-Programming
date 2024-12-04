#include <iostream>
#include <string>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    long long dx = 0, dy = 0;
    for (char c : s) {
        if (c == 'U') dy++;
        if (c == 'D') dy--;
        if (c == 'L') dx--;
        if (c == 'R') dx++;
    }

    long long x = 0, y = 0;
    bool canReach = false;
    for (int i = 0; i < s.length(); i++) {
        long long deltaX = a - x;
        long long deltaY = b - y;

        if ((dx == 0 && deltaX == 0 || dx != 0 && deltaX % dx == 0 && deltaX / dx >= 0) &&
            (dy == 0 && deltaY == 0 || dy != 0 && deltaY % dy == 0 && deltaY / dy >= 0)) {
            canReach = true;
            break;
        }

        // Update position according to current character
        if (s[i] == 'U') y++;
        if (s[i] == 'D') y--;
        if (s[i] == 'L') x--;
        if (s[i] == 'R') x++;
    }

    cout << (canReach ? "Yes" : "No") << endl;

    return 0;
}