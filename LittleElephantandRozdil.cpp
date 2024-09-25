#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of towns
    vector<long long> travel_times(n); // Vector to store travel times

    // Read the travel times
    for (int i = 0; i < n; i++) {
        cin >> travel_times[i];
    }

    // Initialize variables to find the minimum time and its frequency
    long long min_time = 10000000000;
    long long min_index = -1;
    long long count_min = 0;

    // Loop through travel times to find the minimum
    for (int i = 0; i < n; i++) {
        if (travel_times[i] < min_time) {
            min_time = travel_times[i];
            min_index = i; // Store index of the minimum time
            count_min = 1; // Reset count to 1
        } else if (travel_times[i] == min_time) {
            count_min++; // Increment count if same as min_time
        }
    }

    // Output result based on the count of minimum times
    if (count_min == 1) {
        cout << (min_index + 1) << endl; // Output 1-indexed town number
    } else {
        cout << "Still Rozdil" << endl; // More than one town with minimum time
    }

    return 0;
}