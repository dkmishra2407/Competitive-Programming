#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans(n);
    int zc = 0;  // Zero count
    int noc = 0; // Negative count
    long long ans1 = 0; // Total cost

    for(int i = 0; i < n; i++){
        cin >> ans[i];

        if(ans[i] < 0){
            noc++;
            ans1 += abs(ans[i] + 1); // Convert negative number to -1
        }

        if(ans[i] == 0){
            zc++;
            ans1 += 1; // Convert 0 to 1
        }

        if(ans[i] > 0){
            ans1 += abs(ans[i] - 1); // Convert positive number to 1
        }
    }

    // If there's an odd number of negative numbers and no zero, we need to adjust
    if(noc % 2 != 0 && zc == 0){
        ans1 += 2; // Convert one -1 to 1 to make the product positive
    }

    cout << ans1 << endl;

    return 0;
}
