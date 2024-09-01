#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    int count = 0;

    while(n>=2){
        if(n>=4){
        count += n/4;
        n = n % 4;
    }
    else{
        count += n/2;
        n = n % 2;
    }
    }

    cout<<count<<endl;
}
return 0;
}