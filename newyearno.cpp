#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the value of n for each test case

        // Calculate the maximum number of 2020s that can fit in n
        int c2020 = n / 2020;
        // Calculate the maximum number of 2021s that can fit in n
        int c2021 = n / 2021;

        // Check if n can be formed using only 2020s
        if (n % 2020 == 0) {
            cout << "YES" << endl;
            continue;
        }

        // Check if n can be formed using only 2021s
        if (n % 2021 == 0) {
            cout << "YES" << endl;
            continue;
        }

        // Check combinations of 2020s and 2021s
        bool found = false;
        for (int i = 0; i <= c2020; i++) {
            // Calculate the remaining amount after using i 2020s
            int remainder = n - 2020 * i;
            // Check if the remainder can be formed using 2021s
            if (remainder >= 0 && remainder % 2021 == 0) {
                found = true;
                cout << "YES" << endl;
                break;
            }
        }

        // If no valid combination was found, output "NO"
        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}