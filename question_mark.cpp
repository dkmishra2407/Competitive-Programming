#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Number of correct answers per option
        string s;
        cin >> s; // Tim's answers
        
        int countA = 0, countB = 0, countC = 0, countD = 0, countQ = 0;

        // Count occurrences of A, B, C, D, and ?
        for (char ch : s) {
            if (ch == 'A') countA++;
            else if (ch == 'B') countB++;
            else if (ch == 'C') countC++;
            else if (ch == 'D') countD++;
            else if (ch == '?') countQ++;
        }

        // Calculate maximum correct answers
        int maxCorrect = 0;
        
        maxCorrect = min(n,countA) + min(n,countB) +  min(n,countC) + min(n,countD);
        
        cout << maxCorrect << endl; // Output the result for this test case
    }
    
    return 0;
}
