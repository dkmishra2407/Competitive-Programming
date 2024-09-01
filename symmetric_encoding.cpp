#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<int>s;
    for(auto it:str){
        s.insert(it);
    }

    string str1;
    for(auto it:s){
        str1 += it;
    }

    string str2 = str1;
    reverse(str2.begin(),str2.end());

    map<char,char>m;

    for(int i=0;i<str2.length();i++){
        m.insert({str1[i],str2[i]});
    }

    string fstr;
    for(auto it:str){
        fstr += m[it]; 
    }

    cout<<fstr<<endl;
}
return 0;
}