#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a + b + c;

        if(sum % 2 == 1){
            cout<<-1<<endl;
            continue;
        }

        cout<<min(a+b,sum/2)<<endl;

    }
    return 0;
}