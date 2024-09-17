#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // Your code here
        int n;
        cin>>n;
        int mihai = 0;
        int bi = 0;
        for(int i=0;i<n;i++){
            int x=0;
            cin>>x;
            if(x%2==0){
                mihai += x;
            }
            else{
                bi += x;
            }
        }

        if(mihai>bi){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}