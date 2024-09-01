#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<char> s(n);
        vector<long long int> prefixSum(n + 1, 0);
        
        // Input array and string
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            prefixSum[i + 1] = prefixSum[i] + arr[i];
        }
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        
        // Initialize two pointers
        int i = 0, j = n - 1;
        long long int ans = 0;
        
        // Process the array and string
        while(i < j){
            if(s[i] == 'L' && s[j] == 'R'){
                ans += prefixSum[j + 1] - prefixSum[i];
                i++; j--;
            } else if(s[i] != 'L'){
                i++;
            } else {
                j--;
            }
        }
        
        // Output the answer
        cout << ans << endl;
    }
    return 0;
}