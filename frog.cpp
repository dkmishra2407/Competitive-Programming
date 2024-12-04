#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y,k;
        cin>>x>>y>>k;
        int p=(x+k-1)/k;
        int q=(y+k-1)/k;
        int ans=2*max(p,q);
        if(p>q) ans--;
        cout<<ans<<endl;
    }
    return 0;
}