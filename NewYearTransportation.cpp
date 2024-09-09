#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin >> t;
    vector<int> arr(n);
    for(int i=1;i<=n-1;i++){
        cin>>arr[i];
    }

    int i = 1;
    vector<int> ans;
    while(i<=n){
        if(arr[i]>=1 && arr[i]<=n-i){
            ans.push_back(i+arr[i]);
            i = i+arr[i];
        } 
        else{
            i++;
        }
    }

    if(find(ans.begin(), ans.end(), t) != ans.end()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}