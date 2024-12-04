#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end());

    int missing = 1; 
    for (int i = 0; i < n; i++) {
        if (ans[i] == missing) {
            missing++; 
        }
    }
    
    cout << missing << endl; 
    return 0;
}
