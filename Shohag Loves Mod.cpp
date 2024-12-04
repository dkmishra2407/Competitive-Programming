#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        // Your code here
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cout<<2*(i+1) - 1<<" ";
        }
        cout  << endl;
    }
    return 0;
}