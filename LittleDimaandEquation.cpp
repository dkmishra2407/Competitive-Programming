#include<bits/stdc++.h>
using namespace std;

#define boundary 1e9
long long sump(int p){
    long long sum = 0;


    while (p>0)
    {
        /* code */
        sum += p%10;
        p = p/10;
    }

    return sum;
    
}
long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) { // If b is odd, multiply a with the result
            result *= a;
        }
        a *= a;  // Square the base
        b /= 2;  // Divide the exponent by 2
    }
    return result;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    vector<int> ans;
    for(int i=1;i<=81;i++){
         long long p = b * power(i,a) + c;
         if(i == sump(p) && p< boundary){
            ans.push_back(p);
         }
    }
    cout << ans.size() << endl;

    for(auto it:ans){
        cout << it << " ";
    }
    cout<<endl;
    return 0;
}