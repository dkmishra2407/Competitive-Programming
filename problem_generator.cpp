#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;

    string str;
    cin>>str;

    int a=0,b=0,c=0,d=0,e=0,f=0,g=0;

    for(auto it:str){
        if(it=='A'){
            a++;
        }
        if(it=='B'){
            b++;
        }
        if(it=='C'){
            c++;
        }
        if(it=='D'){
            d++;
        }
        if(it=='E'){
            e++;
        }
        if(it=='F'){
            f++;
        }
        if(it=='G'){
            g++;
        }
    }

    int arr[7] = {a,b,c,d,e,f,g};
    int count = 0;
    for(int i=0;i<7;i++){
        if(arr[i]<m){
            count += (m-arr[i]);
        }
    }

    cout<<count<<endl;
}
return 0;
}