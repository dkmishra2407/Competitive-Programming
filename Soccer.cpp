#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long x1,x2,y1,y2; cin >> x1 >>  x2 >> y1 >> y2;
        if((x2-x1) * (y2-y1) > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}