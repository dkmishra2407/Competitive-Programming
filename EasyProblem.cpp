#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[t];
    while(t--){
        // Your code here
        cin>>arr[t];
        if(arr[t]==1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
cout<<"EASY"<<endl;

    return 0;
}