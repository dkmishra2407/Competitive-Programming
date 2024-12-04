#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

// Function to process each test case
void solve() 
{
    ll n;
    cin >> n;  // Read the number of columns in the grid
 
    // Declare a 2D character array to hold the grid
    char c[2][n];
    for(ll i = 0; i < 2; i++) {
        for(ll j = 0; j < n; j++) {
            cin >> c[i][j];  // Read the grid row by row
        }
    }
 
    ll ans = 0;  // Initialize the answer (number of matching patterns)
    
    // Loop through the rows and columns to find matching patterns
    for(ll i = 0; i < 2; i++) {
        for(ll j = 1; j < n - 1; j++) {  // Start from second column, end at second-last column
            if(i == 0) {
                // Check for the specific pattern in row 0 and row 1
                if(c[i][j] == '.' && c[i][j - 1] == '.' && c[i][j + 1] == '.' &&
                   c[i + 1][j] == '.' && c[i + 1][j + 1] == 'x' && c[i + 1][j - 1] == 'x') {
                    ans++;  // Increment the count if the pattern is found
                }
            } else {
                // Check for the specific pattern in row 1 and row 0
                if(c[i][j] == '.' && c[i][j - 1] == '.' && c[i][j + 1] == '.' &&
                   c[i - 1][j] == '.' && c[i - 1][j + 1] == 'x' && c[i - 1][j - 1] == 'x') {
                    ans++;  // Increment the count if the pattern is found
                }
            }
        }
    }
 
    cout << ans << nl;  // Output the result for the current test case
}
 
int main()
{
    ios_base::sync_with_stdio(false);  // Fast I/O
    cin.tie(NULL);  // Untie input and output for efficiency
    
    int t;  // Number of test cases
    cin >> t;
    
    while(t--) {
        solve();  // Solve each test case
    }
    
    return 0;
}
