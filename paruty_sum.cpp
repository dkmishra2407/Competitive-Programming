#include <bits/stdc++.h>
using namespace std;

// Function to calculate the minimum operations needed
long long f(vector<long long> &even, vector<long long> &odd) {
    int n1 = even.size();
    int n2 = odd.size();
    long long mx = odd.back(); // Use long long for maximum odd value
    long long ans = 0; // Use long long for answer
    
    for (int i = 0; i < n1; i++) {
        if (even[i] > mx) {
            return (n1 + 1); // Return n1 + 1 as long long
        } else {
            ans++;
            mx += even[i]; // Update mx with long long addition
        }
    }
    
    return ans; // Return the answer as long long
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the size of the array

        vector<long long> arr(n); // Use long long for the input array
        int odd_count = 0;
        int even_count = 0;

        vector<long long> even, odd; // Use long long for even and odd vectors
        for (int i = 0; i < n; ++i) {
            cin >> arr[i]; // Read each element
            if (arr[i] % 2 == 0) {
                even_count++;
                even.push_back(arr[i]); // Store even numbers
            } else {
                odd_count++;
                odd.push_back(arr[i]); // Store odd numbers
            }
        }

        // If all numbers are already of the same parity
        if (n == odd_count || n == even_count) {
            cout << 0 << endl;
            continue;
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        cout << f(even, odd) << endl; // Call the function with long long vectors
    }
    return 0;
}