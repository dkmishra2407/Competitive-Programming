#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    map<string,int>m;
    cin >> t;
    string maxiTime;
    int maxi = 0;
    while(t--){
        string str;
        cin>>str;
        m[str]++;

        if(maxi < m[str]){
            maxi = m[str];
            maxiTime = str;
        }
        
    }

    cout << maxiTime << endl;


    return 0;
}