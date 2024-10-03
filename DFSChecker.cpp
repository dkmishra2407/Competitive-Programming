#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // Your code here
        int n,a,b;
        cin>>n>>a>>b;
        int c;
        int ans;
        if (n% 2 ==0) {
             c = n/2;
             ans = c*b;
        }
        else{
             ans =( n/2) * b  +a;
        }
        cout << min(n*a,ans) << endl;
        
    }
    return 0;
}