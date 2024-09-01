#include<bits/stdc++.h>
using namespace std;

void asquare()
{
    int x,y;
    cin>>x>>y;
    int c=0;
    while(x>0||y>0){
        if(y>=2){
            x-=7;
            y-=2;
            c++;
        }
        else if(y==1){
            x-=11;
            y-=1;
            c++;
        }
        else{
            x-=15;
            c++;
        }
    }
    cout<<c<<"\n";
}
//Main
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    return 0;
}
