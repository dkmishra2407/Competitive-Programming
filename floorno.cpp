#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // Your code here
        int n,x;
        cin>>n>>x;

        if(n==1 || n==2){
            cout<<1<<endl;
            continue;
        }

        int a = 2;
        int c = 0;
        while(n>a){
            a += x;
            c++;
        }

        cout<<c+1<<endl;


    }
    return 0;
}