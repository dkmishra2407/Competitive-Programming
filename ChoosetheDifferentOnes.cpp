#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> arr(n), arr1(m);
        vector<bool> vis(k+1, false);
        int count1 = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] <= k && arr[i] % 2 == 0){
                vis[arr[i]] = true;
            }
        }

        for(int i = 0; i < m; i++){
            cin >> arr1[i];
            if(arr1[i] <= k && arr1[i] % 2 == 0){
                count1++;
                vis[arr1[i]] = true;
            }
        }

        bool flag = true;
        for(int i = 2; i <= k; i += 2){
            if(!vis[i]){
                flag = false;
                break;
            }
        }

        if(n < k/2 || m < k/2 || !flag){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}