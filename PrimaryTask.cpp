#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read an integer
        string str = to_string(n); // Convert the integer to a string

        // Check if the string has at least 3 characters
        if (str.length() < 3) {
            cout << "NO" << endl;
            continue;
        }

        // Check if the string starts with "10"
        if (str.substr(0, 2) != "10") {
            cout << "NO" << endl;
            continue;
        }

        // Check if the third character is '0'
        if (str[2] == '0') {
            cout << "NO" << endl;
            continue;
        }

        // Extract the substring starting from index 2
        int a = stoi(str.substr(2)); // Convert the substring from index 2 to an integer

        // Check if the extracted integer is less than 2
        if (a < 2) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl; // All conditions passed
    }
    return 0;
}