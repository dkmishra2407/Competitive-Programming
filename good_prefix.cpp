#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n==1){
            if(arr[0]==0){
                cout<<1<<endl;
                continue;
            }
            if(arr[0]==1){
                cout<<0<<endl;
                continue;
            }
        }
        int count = 0;
        int currsum = arr[0];
        bool flag = 0;
        bool flag1 = 0;
        for(int i=1;i<n;i++){
            if(currsum == 0){
                count++;
                flag1 = 1;
            }
            if(flag == 1 && arr[i]==0){
                count++;
                flag1 = 1;
            }
            if(currsum == arr[i]){
                count++;
                flag = 1;
                flag1 = 1;
            }
            else{
                flag = 0;
            }
            currsum += arr[i];

            if(currsum == *max_element(arr, arr + i + 1) && flag1 == 0){
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}