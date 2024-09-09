#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    if(n<m){
        cout << -1 << endl;
        return 0;
    }
    if(n==m){
        cout << n << endl;
        return 0;
    }
    int ans;
    if(n%2==0){
         ans =  n/2 ;
    }
    else{
        ans =  n/2 + 1;
    }
    for(int i=ans;i<n;i++){
        if(i%m==0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}