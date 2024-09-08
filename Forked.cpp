#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;

        // All 8 possible knight moves
        vector<pair<long long, long long>> knightMoves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<long long, long long>> sking;
        set<pair<long long, long long>> squeen; 
        for(auto it : knightMoves) {
            sking.insert(make_pair(xk + it.first, yk + it.second));
        }
        
        for(auto it : knightMoves) {
            squeen.insert(make_pair(xq + it.first, yq + it.second));
        }

        long long count = 0;
        for(auto it : sking){
            if(squeen.find(it) != squeen.end()){
                count++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
