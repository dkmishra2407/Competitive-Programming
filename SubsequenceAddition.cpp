#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long sum = 0;
        bool flag = true;
        vector<long long > arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end()); // Sort the array
        
        if (arr[0] != 1) { // If the first element is not 1, it's impossible
            cout << "NO" << endl;
            continue;
        }

        sum = 1; // Start with the first element as 1
        for (int i = 1; i < n; i++) { // Start checking from the second element
            if (arr[i] > sum) { // If the current element is greater than sum, it's not possible
                cout << "NO" << endl;
                flag = false;
                break;
            }
            sum += arr[i]; // Accumulate the sum
        }

        if (flag) {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
