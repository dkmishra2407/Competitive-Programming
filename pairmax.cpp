#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z; // Read the three integers for the test case

        // Find the maximum value
        long long max_value = max({x, y, z});
        
        // Check the conditions based on the maximum value
        if (x == max_value && y == z) {
            cout << "YES" << endl;
            cout << x << " " << y << " " << y << endl; // a = x, b = y, c = y
        } else if (y == max_value && x == z) {
            cout << "YES" << endl;
            cout << y << " " << x << " " << x << endl; // a = y, b = x, c = x
        } else if (z == max_value && x == y) {
            cout << "YES" << endl;
            cout << z << " " << x << " " << x << endl; // a = z, b = x, c = x
        } else {
            cout << "NO" << endl; // No valid (a, b, c) exists
        }
    }
    return 0;
}