#include<bits/stdc++.h>
using namespace std;
int main(){

string str;
cin>>str;

for(int i=0;i<str.length();i++){
    if(i==0 && str[i]<'9' && str[i]>='5'){
        str[i] = '9' - str[i] + '0';
    }
    else if(i>0 && str[i]>='5'){
        str[i] = '9' - str[i] + '0';
    }
}

cout<<str<<endl;
return 0;
}