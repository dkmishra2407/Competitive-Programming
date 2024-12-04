#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<vector<int>> matrix(n,vector<int>(n,0));
    matrix[0][0] = k;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout << k << " ";
            }
            else{
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}