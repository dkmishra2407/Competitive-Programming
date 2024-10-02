#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int count_ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            count_ones++;  
        }
    }

   
    if (count_ones == n) {
        cout << n - 1 << endl;  
        return 0;
    }

   
    vector<int> diff(n);
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            diff[i] = -1;  
        } else {
            diff[i] = 1;   
        }
    }

    int max_subarray_sum = INT_MIN;
    int current_sum = 0;
    for (int i = 0; i < n; i++) {
        current_sum += diff[i];
        if (current_sum > max_subarray_sum) {
            max_subarray_sum = current_sum;
        }
        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    cout << count_ones + max_subarray_sum << endl;

    return 0;
}
