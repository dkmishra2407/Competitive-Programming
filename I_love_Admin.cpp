#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans(t);
    
    if(t == 1){
        cout << 0 << endl; // Only one element, no changes possible
        return 0;
    }

    // Read the first element first
    cin >> ans[0];
    int mini = ans[0];
    int maxi = ans[0];
    int count = 0;

    // Start from the second element
    for(int i = 1; i < t; i++){
        cin >> ans[i];

        if(ans[i] > maxi){
            maxi = ans[i];
            count++;
        }
        if(ans[i] < mini){
            mini = ans[i];
            count++;
        }
    }

    cout << count << endl; // Output the count of changes
    return 0;
}