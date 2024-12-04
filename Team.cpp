#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    m = 3;
    int ans = 0;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1){
                count++;
            }
        }

        if(count>=2){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}