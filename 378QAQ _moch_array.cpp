#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Check if n is less than 2
        if (n < 2) {
            cout << "NO" << endl;
            continue;
        }

        vector<int> arr(n); // Use vector for dynamic array size

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end()); // Sort the vector
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }

        if(count == n){
            cout << "NO" << endl;
            continue;
        }
        int a = arr[count+0];
        int b = arr[count+1];
        bool isValid = true; // Flag to check validity

        for (int i = 2; i < n; i++) { // Loop through remaining elements
            if (arr[i] % a != 0 && arr[i] % b != 0) {
                cout << "NO" << endl;
                isValid = false; // Set flag to false if condition fails
                break; // Exit loop on first failure
            }
        }

        if (isValid) {
            cout << "YES" << endl; // Print YES if all checks passed
        }
    }
    return 0;
}