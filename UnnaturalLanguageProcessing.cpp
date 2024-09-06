#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string str;
        cin >> str;

        // For strings of length 3 or less, output the original string directly
        if(n <= 3){
            cout << str << endl;
            continue;
        }

        string nstr;
        int i = 0;

        // Loop through the string
        while(i < n){
            // Check if the current character is 'a' or 'e'
            if(str[i] == 'a' || str[i] == 'e'){
                // Check if we can access i+2 and if str[i+2] is also 'a' or 'e'
                if(i + 2 < n && (str[i+2] == 'a' || str[i+2] == 'e')){
                    // Append current character and a dot
                    nstr += str[i];
                    nstr += '.';
                    i++; // Move to the next character
                } 
                else if(i + 1 < n) {
                    // Append next two characters and a dot if i+1 is valid
                    nstr += str[i];
                    nstr += str[i+1];
                    nstr += '.';
                    i += 2; // Move forward by 2 characters
                } else {
                    // Handle last single character if no pair is possible
                    nstr += str[i];
                    i++;
                }
            }
            else{
                // If the current character is not 'a' or 'e', just append it
                nstr += str[i];
                i++;
            }
        }

        // Clean up the last part of the new string based on original string
        if(nstr.back() == '.'){
            // If nstr ends with a dot, remove it
            nstr.pop_back();
        }

        // Print the transformed string
        cout << nstr << endl;
    }
    return 0;
}
