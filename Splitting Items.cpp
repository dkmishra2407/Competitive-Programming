#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() 
{
	ll n, k;
	cin >> n >> k;

	// Input the array
	vector<ll> arr(n);
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Sort the array in descending order
	sort(arr.begin(), arr.end(), greater<ll>());

	ll ans = 0;
	for(ll i = 1; i < n; i += 2) {
		if(arr[i] < arr[i - 1]) {
			ll diff = arr[i - 1] - arr[i];
			if(diff <= k) {
				k -= diff;
			} else {
				ans += (diff - k);
				k = 0;
			}
		}
	}

	// If there is an odd number of elements, add the last element to the answer
	if(n % 2 != 0) {
		ans += arr[n - 1];
	}

	cout << ans << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
