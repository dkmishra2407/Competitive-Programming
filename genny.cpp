#include<bits/stdc++.h>
using namespace std;

int main() {
    
        string str;
        cin >> str; // Input the string to check against

        int n = 5; // Number of strings to be input into the vector
        vector<string> arr(n); // Initialize vector with size n
        string nstr; // String to hold concatenated result


        for(int i = 0; i < n; i++) {
            cin >> arr[i]; // Input each string
            nstr += arr[i]; // Concatenate strings
        }
        // Check if the first or second character of `str` is found in the concatenated string
        if(nstr.find(str[0]) != string::npos || nstr.find(str[1]) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    return 0;
}
