#include <bits/stdc++.h>
using namespace std;

int solve(vector<pair<int, int>> ans, int t) {
    while (true) {
        for (int i = 0; i < 7; i++) { // Change loop to iterate from 0 to 6
            if (t > ans[i].second) {
                t -= ans[i].second; // Decrease t by the day's value
            } else if (t == ans[i].second) {
                return (i + 1) % 7 == 0 ? 7 : (i + 1) % 7; // Return next day, handle wrap-around
            } else {
                return i + 1; // Return current day (1-based index)
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, int>> ans;

    for (int i = 0; i < 7; i++) { // Change loop to iterate from 0 to 6
        int x;
        cin >> x;
        ans.push_back({i + 1, x}); // Store day index as 1-based
    }
    
    cout << solve(ans, t);
    return 0;
}