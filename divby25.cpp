#include<bits/stdc++.h>
using namespace std;

int f(int index, int num, string str, vector<vector<int>> &dp) {
    if (index == str.length()) {
        if (num % 25 == 0) {
            return 0;
        } else {
            return 1e9;
        }
    }

    if (dp[index][num] != -1) {
        return dp[index][num];
    }

    int take = 1 + f(index + 1, num, str, dp);
    int notTake = f(index + 1, (10 * num + (str[index] - '0')) % 25, str, dp);

    int ans = min(take, notTake);
    return dp[index][num] = ans;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        string str = to_string(n);
        vector<vector<int>> dp(21, vector<int>(26, -1));
        cout << f(0, 0, str, dp) << endl;
    }
    return 0;
}

// #include <iostream>
// #include <string>
// #include <climits>

// using namespace std;

// int minStepsToMakeDivisibleBy25(long long n) {
//     string str_n = to_string(n);
//     int len_n = str_n.length();
//     int min_steps = INT_MAX;

//     // Check for pairs that can form 00, 25, 50, or 75
//     for (int i = len_n - 1; i >= 0; --i) {
//         if (str_n[i] == '0' || str_n[i] == '5') {
//             for (int j = i - 1; j >= 0; --j) {
//                 if ((str_n[i] == '0' && str_n[j] == '0') || 
//                     (str_n[i] == '5' && str_n[j] == '2') || 
//                     (str_n[i] == '0' && str_n[j] == '2') || 
//                     (str_n[i] == '5' && str_n[j] == '7')) {
                    
//                     // Calculate steps needed to remove digits
//                     int steps = len_n - (i + 1) + (i - j - 1);
//                     min_steps = min(min_steps, steps);
//                 }
//             }
//         }
//     }

//     return min_steps;
// }

// int main() {
//     long long t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         cout << minStepsToMakeDivisibleBy25(n) << endl;
//     }
//     return 0;
// }