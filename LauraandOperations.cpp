// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
//     int a,b,c;
//     cin>>a>>b>>c;

//        int ans1=0,ans2=0,ans3 =0 ;

//     if(a==b && b==c){
//         cout<<1<<" "<<1<<" "<<1<<endl;
//         continue;
//     }
//     else if(a==b && b != c){
//         ans3++;
//     }
//     else if(a==c && b != c){
//         ans2++;
//     }
//     else if(c==b && a != c){
//         ans1++;
//     }
//     else if(a>b && a>c){
//         ans1++;
//     }

//     else if(a<b && b>c){
//         ans2++;
//     }

//     else{
//         ans3++;
//     }

//     cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        cout << (b % 2 == c % 2) << " " << (a % 2 == c % 2) << " " << (a % 2 == b % 2) << endl;
    }
    return 0;
}