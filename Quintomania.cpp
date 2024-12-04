#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        
        // Read the first element
        cin >> arr[0];
        bool isFound = false;

        for (ll i = 1; i < n; i++) {
            cin >> arr[i];
            // Check if the absolute difference is not 5 and not 7
            if(abs(arr[i] - arr[i - 1]) != 5 && abs(arr[i] - arr[i - 1]) != 7) {
                cout << "NO" << endl;
                isFound = true;
                break;
            }
        }
        if(!isFound) {
            cout << "YES" << endl;
        }
    }
    return 0;
}