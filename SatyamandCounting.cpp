#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    if(t==1){
        cout<<1<<endl;
        return 0;
    }
    int a = 1;
    int b = 1;
    int c;
    for(int i=2;i<=t;i++){
        c = a + b;
        a = b;
        b = c;
    }

    cout<<c<<endl;
    return 0;
}