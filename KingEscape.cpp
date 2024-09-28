#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int ax,ay;
    cin>>ax>>ay;

    int bx,by;
    cin>>bx>>by;

    int cx,cy;
    cin>>cx>>cy;

    int ans1 = bx-ax;
    int ans2 = cx-ax;
    int ans3 = by-ay;
    int ans4 = cy-ay;

    if((ans1>0 && ans2>0 || ans1<0 && ans2<0) && (ans3>0 && ans4>0 || ans3<0 && ans4<0)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}