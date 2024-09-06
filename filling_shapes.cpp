#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    
    if(t%2 != 0){
        cout << 0 << endl;
    }
    else{
        cout<<pow(2,t/2)<<endl;
    }
    return 0;
}