#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        string str;
        cin >> str; // Read the input string

        int n = str.length();
        int cost = 0; // Initialize cost to 0

        for (int i = 0; i < n; i++) {
            if (str[i] == '1') { // Check for '1'
                int count = 0;
                int j = i; // Start of the segment of '1's

                // Count the length of the segment of '1's
                while (i < n && str[i] == '1') {
                    count++;
                    i++;
                }

                // i is now at the first character after the segment of '1's
                int k = i; // End of the segment of '1's

                // If the segment of '1's covers the entire remaining string
                if (k - j == n - j) {
                    cost += 0; // No additional cost
                } else {
                    cost += (k - j); // Add the length of the segment to cost
                }

                i = j+1 ;
            }
        }

        cout << cost << endl; // Output the total cost for the test case
    }
    return 0;
}