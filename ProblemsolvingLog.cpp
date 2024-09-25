#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n; 
        string str;
        cin >> str; 

        map<char, int> m; 
        map<char, int> realm; 
        
       
        for(int i = 0; i < 26; i++) {
            realm[(char)('A' + i)] = i + 1; 
        }

        // Count occurrences of each character in the string
        for(int i = 0; i < n; i++) {
            m[str[i]]++;
        }

        int count = 0;
        
        // Compare counts with their mapped values
        for(char c = 'A'; c <= 'Z'; c++) {
            if(m[c] >= realm[c]) { // Check if occurrence matches its mapped value
                count++;
            }
        }
        
        cout << count << endl; // Output the result
    }
    return 0;
}