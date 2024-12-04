#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Comparator to sort map by values in descending order
bool mycmp(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    return a.second > b.second;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;

        // Map to store frequency of elements
        map<ll, ll> m;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            m[arr[i]]++;
        }

        // Create a vector of pairs from the map and sort by frequency (value)
        vector<pair<ll, ll>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), mycmp);

        ll ans = 0;  // Initialize the answer variable
        ll previ = -1;  // Variable to store the previous element
        ll remainingK = k;  // Track how many selections are left

        // Iterate through the sorted vector
        for (auto it = vec.begin(); it != vec.end(); it++) {
            ll current_element = it->first;
            ll frequency = it->second;

            if (remainingK > 0 && (previ == -1 || current_element == previ + 1)) {
                ans += frequency;
                previ = current_element;  // Update previous element
                remainingK--;  // Decrease the value of k
            }

            if (remainingK <= 0) {
                break;  // Stop if no more selections are allowed
            }
        }

        cout << ans << endl;  // Output the final answer
    }

    return 0;
}
