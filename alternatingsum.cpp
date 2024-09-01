#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // Your code here
        int n;
        cin>>n;
        vector<int> ans(n);
        int sum1 = 0 ;
        int sum2 = 0;

        for(int i=0;i<n;i++){
            cin>>ans[i];
            if(i%2==0){
                sum1 += ans[i];
            }
            else{
                sum2 += ans[i];
            }
        }
        cout<<sum1-sum2<<endl;
    }
    return 0;
}