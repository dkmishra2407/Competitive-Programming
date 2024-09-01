#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases; // Read the number of test cases

    while (numberOfTestCases--) {
        int integerValue;
        cin >> integerValue; // Read the integer value

        // Convert the integer value to a string
        string stringValue = to_string(integerValue);
        int stringLength = stringValue.length();

        // Check if the first two characters are "10"
        if (stringValue.substr(0, 2) != "10") {
            cout << "NO" << endl;
            continue;
        }

        // Check if the third character is not '0'
        if (stringLength < 3 || stringValue[2] == '0') {
            cout << "NO" << endl;
            continue;
        }

        // Check if the exponent is less than 2
        int exponent = stoi(stringValue.substr(2, stringLength - 2));
        if (exponent < 2) {
            cout << "NO" << endl;
            continue;
        }

        // If all checks pass
        cout << "YES" << endl;
    }
    return 0;
}