#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the length of the permutation

        vector<int> p(n); // Create a vector to store the permutation
        for (int i = 0; i < n; i++) {
            cin >> p[i]; // Read the elements of the permutation
        }

        // Sort the elements in ascending order
        sort(p.begin(), p.end());

        // Rearrange the elements in a specific pattern
        vector<int> q(n);
        int left = 0, right = n - 1;
        for (int i = 0; i < n; i += 2) {
            q[i] = p[right]; // Place the largest remaining element
            right--;
        }
        for (int i = 1; i < n; i += 2) {
            q[i] = p[left]; // Place the smallest remaining element
            left++;
        }

        // Output the rearranged permutation q
        for (int i = 0; i < n; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}