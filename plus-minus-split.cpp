#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char arr[n];
    int c = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]=='+'){
            c++;
        }
    }
    cout<<abs((n-c) - c)<<endl;
}
return 0;
}