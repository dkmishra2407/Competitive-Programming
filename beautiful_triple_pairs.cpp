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

    int count = 0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-2;j++){
  
                if(arr[i] != arr[j] && arr[i+1] == arr[j+1] && arr[i+2]==arr[j+2]){
                    count++;
                    cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
                }
                else if(arr[i] != arr[j] && arr[i+1] == arr[j+1] && arr[i+2] != arr[j+2]){
                    count++;
                    cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
                }
                else if(arr[i] == arr[j] && arr[i+1] != arr[j+1] && arr[i+2] == arr[j+2]){
                    count++;
                    cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<endl;
                }
        
        }
    }

    cout<<count<<endl;
}
return 0;
}