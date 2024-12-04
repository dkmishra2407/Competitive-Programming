#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void findans(ll n, vector<ll>& s) {
    unordered_map<ll, int> freq;
    for (ll num : s) {
        freq[num]++;
    }

    for (ll it : s) {
        if (n % it == 0) {
            ll other = n / it;

            if (freq[it] > 0 && freq[other] > 0) {
                if (it == other && freq[it] < 2) continue;

                cout << it << " " << other << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> s(n); // Read n elements
        for (ll i = 0; i < n; i++) {
            cin >> s[i];
        }

        findans(n - 2, s); 
    }
    return 0;
}
