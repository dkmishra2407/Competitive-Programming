#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    vector<pair<int, int>> bottles(n);
    vector<bool> canBeOpened(n, false); 
    for (int i = 0; i < n; i++) {
        cin >> bottles[i].first >> bottles[i].second; 
        if( bottles[i].first == bottles[i].second){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
