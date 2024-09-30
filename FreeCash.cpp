// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     set<pair<int, int>> s;  // To store unique pairs

//     int original_t = t;  // Save the original value of t before modifying it

//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         s.insert({n, m});  // Insert pairs into the set
//     }

//     // The number of repeated pairs is original_t - s.size()
//     cout << (original_t - s.size()) + 1<< endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    unordered_map<string, int> m;  // Use unordered_map for faster access
    int maxi = 0;  // To store the maximum count of occurrences

    while (t--) {
        int n, p;
        cin >> n >> p;

        string str = to_string(n) + to_string(p);  // Concatenate n and p to form the string
        m[str]++;  // Increment the count for this time combination

        // Update maximum count if necessary
        maxi = max(maxi, m[str]);
    }

    cout << maxi << endl;  // Output the maximum count of occurrences

    return 0;
}