#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    vector<long long> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long c = 1;
    long long maxi = 0;
    for(long long i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            c++;
        }
        else{
            c = 1;
        }

        if(c>maxi){
            maxi = c;
        }
    }

    cout<<maxi<<endl;

    return 0;
}