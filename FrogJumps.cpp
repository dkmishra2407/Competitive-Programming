#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        int maxi = INT_MIN;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                count++;
            }
            else if (s[i] == 'R') {
                count++;
                if(count>maxi){
                    maxi = count;
                }
                count = 0;
            }
        }
        cout << max(maxi,count+1) << endl;
    }
    return 0;
}