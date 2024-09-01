#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minLengthWithSubstringAndSubsequence(const string& a, const string& b) {
    int n = a.length();
    int m = b.length();
    
    // Calculate the maximum overlap of b as a subsequence in a
    int overlap = 0;
    int j = 0; // Pointer for string b
    
    // Traverse string a and try to match characters in b
    for (int i = 0; i < n && j < m; i++) {
        if (a[i] == b[j]) {
            j++;
            overlap++;
        }
    }
    
    // Calculate the minimum length
    return n + m - overlap;
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        string a, b;
        cin >> a >> b; // Read strings a and b
        cout << minLengthWithSubstringAndSubsequence(a, b) << endl; // Output the result
    }
    return 0;
}
