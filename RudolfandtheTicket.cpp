#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> ans(n);
        vector<int> arr(m);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i] + arr[j] <= k){
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }
    return 0;
}