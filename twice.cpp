#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        // Your code here
        unordered_map<ll,ll>m;

        ll n;
        cin >> n;
        ll c =0;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            m[arr[i]]++;
            if(m[arr[i]] == 2){
                c++;
                m[arr[i]] = 0;
            }
        }

        cout << c << endl;

    }
    return 0;
}