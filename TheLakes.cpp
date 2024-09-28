// #include<bits/stdc++.h>
// using namespace std;
// int sol(int row,int col,int n,int m,vector<vector<int>> matrix,vector<vector<int>> visited,int sum){
//      int delcol[4] = {};
//      int delrow[4] = {};
//      for(int i=0;i<4;i++){
//             int nrow = row + delrow[i];
//             int ncol = col + delcol[i];

//             if(!visited[nrow][ncol] && n<row && m<col && row>0 && col>0 ){
//                 sol(nrow,ncol,n,m,matrix,visited,sum+matrix[nrow][ncol]);
//             }        
//     }

//     return sum;
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         vector<vector<int>> matrix(n,vector<int>(m,0));
//         vector<vector<int>> visited(n,vector<int>(m,0));

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin>>matrix[i][j];
//                 if(matrix[i][j]==0){
//                     visited[i][j] =1;
//                 }
//             }
//         }

//         int maxi = INT_MIN;

//          for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 int sum = 0;
//                 if(!visited[i][j]){
//                     maxi = max(maxi,sol(i,j,n,m,matrix,visited,sum));
//                 }
//             }
//         }

//         cout << maxi << endl;

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int sol(int row, int col, int n, int m, vector<vector<int>>& matrix, vector<vector<int>>& visited) {
    // Directions for moving in 4 possible ways (up, down, left, right)
    int delrow[4] = {-1, 1, 0, 0};
    int delcol[4] = {0, 0, -1, 1};

    
    if (row < 0 || row >= n || col < 0 || col >= m || visited[row][col] || matrix[row][col] == 0) {
        return 0;
    }

    
    visited[row][col] = 1;

    
    int sum = matrix[row][col];

    
    for (int i = 0; i < 4; i++) {
        sum += sol(row + delrow[i], col + delcol[i], n, m, matrix, visited);
    }

    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        vector<vector<int>> visited(n, vector<int>(m));

       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
                if (matrix[i][j] == 0) {
                    visited[i][j] = 1; 
                }
            }
        }

        int maxi = 0;

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j]) { // If cell is not visited and not blocked
                    maxi = max(maxi, sol(i, j, n, m, matrix, visited));
                }
            }
        }

        cout << maxi << endl; // Output the maximum sum found
    }
    return 0;
}