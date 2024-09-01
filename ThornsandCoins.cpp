#include<bits/stdc++.h>
using namespace std;

int solve(int i, string str, vector<int>& dp) {
    int n = str.length();
    if(i >= n) {
        return 0;
    }

    if(dp[i] != -1) {
        return dp[i];
    }

    if(str[i] == '*') {
        return dp[i] = 0;
    } else if(str[i] == '@') {
        return dp[i] = max(solve(i+1, str, dp), solve(i+2, str, dp)) + 1;
    } 
    return dp[i] = max(solve(i+1, str, dp), solve(i+2, str, dp));
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        vector<int> dp(n, -1);
        cout << solve(0, str, dp) << endl;
    }
    return 0;
}