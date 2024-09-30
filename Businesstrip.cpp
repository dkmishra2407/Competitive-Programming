#include<bits/stdc++.h>
using namespace std;

int main(){
    
        // Your code here
        int k;
        cin>>k;
        vector<int> ans(12);
        long long sum = 0;
        int c = 0;
        for(int i=0;i<12;i++){
            cin>>ans[i];
            sum += ans[i];
            if(ans[i]==0){
                c++;
            }
        }

        if(k==sum){
            cout << 12 - c << endl;
            return 0;
        }

        sort(ans.begin(),ans.end());
        bool flag = 1;
        int count = 0;
        for(int i=11;i>=0;i--){
            if(k<=0){
                cout << count << endl;
                flag = 0;
                break;
            }
            k -= ans[i];
            count++;
        }

        if(flag){
            cout << -1 << endl;
        }
    
    return 0;
}