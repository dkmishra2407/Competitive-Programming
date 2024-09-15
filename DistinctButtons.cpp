#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;

        while(n--){
            long long x, y; 
            cin >> x >> y;

            if(x > 0){
                s.insert(1);
            }
            if(y > 0){
                s.insert(2);
            }
            if(x < 0){
                s.insert(3);
            }
            if(y < 0){
                s.insert(4);
            }
        }
        
        if(s.size() == 4){ 
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}



