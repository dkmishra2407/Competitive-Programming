#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        if(k==0){
            cout<<0<<endl;
            continue;
        }

        if(k<=n){
           cout<<1<<endl;
           continue;
        }

        int c = 1;

        for(int i = n-1;i>=1;i--){
            if(k>0){
                k = k - i;
                c++;
            }
            if(k>0){
                k = k - i;
                c++;
            }

            if(k<0 || k==0){
                cout<<c<<endl;
                break;
            }
        }
    }
    
    return 0;
}