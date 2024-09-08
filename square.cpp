// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){

//             cout<<(long long)pow(max(abs(z-x),abs(w-y)),2)<<endl;
//             continue;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       long long x,y,z,w,a,b,c,d;
            cin>>x>>y;
            cin>>z>>w;
            cin>>a>>b>>c>>d;
        long long max_dist = max(abs(z - x), abs(w - y));
        cout << max_dist * max_dist << endl; 
    }
    return 0;
}
