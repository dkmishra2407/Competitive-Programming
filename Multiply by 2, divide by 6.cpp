#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        long long n;
        cin >> n; 

        int moves = 0;

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        // Count how many times we can divide by 6
        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6; // Divide by 6
            } else if (n % 3 == 0) {
                n *= 2; // Multiply by 2 if divisible by 3
            } else {
                moves = -1; // Impossible if not divisible by either
                break;
            }
            moves++; // Count the move
        }

        cout << (moves == -1 ? -1 : moves) << endl; // Output result for this test case
    }
    return 0;
}