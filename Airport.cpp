#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // Read number of passengers and planes

    vector<int> seats(m);
    for (int i = 0; i < m; ++i) {
        cin >> seats[i];
    }

    priority_queue<int> maxHeap(seats.begin(), seats.end()); 
    int maxRevenue = 0;
    
    for (int i = 0; i < n; ++i) {
        int maxSeats = maxHeap.top(); // Get the plane with the most seats
        maxHeap.pop(); // Remove it from the heap
        maxRevenue += maxSeats; // Add its value to revenue
        if (maxSeats > 1) {
            maxHeap.push(maxSeats - 1); // Decrease seat count and push back if still available
        }
    }

    // Calculate minimum revenue
    priority_queue<int, vector<int>, greater<int>> minHeap(seats.begin(), seats.end()); // Min-heap for minimum revenue
    int minRevenue = 0;

    for (int i = 0; i < n; ++i) {
        int minSeats = minHeap.top(); // Get the plane with the least seats
        minHeap.pop(); // Remove it from the heap
        minRevenue += minSeats; // Add its value to revenue
        if (minSeats > 1) {
            minHeap.push(minSeats - 1); // Decrease seat count and push back if still available
        }
    }

    cout << maxRevenue << " " << minRevenue << endl; // Output results
    return 0;
}