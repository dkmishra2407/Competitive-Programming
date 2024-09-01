#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.length();
    vector<int> ans;

    for(int i=0;i<n;i+=2){
        ans.push_back(str[i]);
    }

    sort(ans.begin(),ans.end());
    int c = 0;
    string nstr = "";
    for(auto it: ans){
        nstr+= it;
        c+=1;
        if(c == n){
            break;
        }
        nstr+= '+';
        c+=1;
    }

    cout<<nstr<<endl;
        return 0;
}