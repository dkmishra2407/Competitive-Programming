#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the length of the sequence

        vector<int> arr(n);  // Initialize vector with size `n`

        for(int i = 0; i < n; i++) {
            cin >> arr[i];  // Read the elements into the vector
        }

        sort(arr.begin(), arr.end());  // Sort the vector

        int mid = n / 2;

        cout << arr[mid] << endl;  // Print the middle element
    }

    return 0;
}
