#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans(t);
    long long sum = 0;
    for(int i = 0 ; i < t ; ++i){
        cin>>ans[i];
        sum += ans[i];
    }
    sort(ans.begin(),ans.end());
    long long sum2 = 0,count = 0;
    for(int i=t-1;i>=0;i--){
        if(sum < sum2){
            break;
        }
        sum2 += ans[i];
        sum = sum - ans[i];
        count++;
    }
    cout << count << endl;
    return 0;
}