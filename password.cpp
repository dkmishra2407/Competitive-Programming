// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // int t;
// // cin>>t;
// // while(t--){

// //     string str;
// //     cin>>str;

// //     string newstr;

// //     if(str.length() == 1){
// //         int a = str[0] - 'a';
// //         newstr = char(a+1) + str;
// //         cout<<newstr<<endl;
// //     }

// //     int maxsize = -1;
// //     int maxrepeatchar;
// //     int p,q;
// //     for(int i=0;i<str.length()-1;i++){
// //         if(str[i] != str[+1]){
// //             if(maxsize>0){
// //                 maxrepeatchar = str[i];
// //                 p = maxsize - i;
// //                 q = i;
// //             }
// //             maxsize = 0;
// //         }
// //         else{
// //             maxsize += 1;
// //         }
// //     }

// //     int n;
// //     if(maxsize==str.length()){
// //         n = str.size();
// //     }
// //     else{
// //         n = q-p;
// //     }
// //     int newpos = 0;
// //     if(n%2==0){
// //         newpos = n/2;
// //     }
// //     else{
// //         newpos = n/2 + 1;
// //     }

// //     int b = str[p] - 'a';
// //     string newchar = char(b+1);

// //     str.insert(str.begin() + newpos,newchar);

// //     cout<<str<<endl;
// // }
// // return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         string str;
//         cin >> str;

//         string newstr;

//         // Handling single character input
//         if (str.length() == 1) {
//             int a = str[0] - 'a';
//             newstr = char(a + 1 + 'a'); // Convert back to char
//             newstr += str; // Append original character
//             cout << newstr << endl;
//             continue; // Skip to the next test case
//         }

//         int maxsize = -1;
//         int maxrepeatchar = -1;
//         int p = -1, q = -1;

//         // Find the longest sequence of repeating characters
//         for (int i = 0; i < str.length() - 1; i++) {
//             if (str[i] != str[i + 1]) {
//                 if (maxsize > 0) {
//                     maxrepeatchar = str[i];
//                     p = i - maxsize; // Start of the repeating sequence
//                     q = i; // End of the repeating sequence
//                 }
//                 maxsize = 0;
//             } else {
//                 maxsize++;
//             }
//         }

//         // If the last characters were part of a repeating sequence
//         if (maxsize > 0) {
//             maxrepeatchar = str[str.length() - 1];
//             p = str.length() - 1 - maxsize; // Start of the repeating sequence
//             q = str.length() - 1; // End of the repeating sequence
//         }

//         int n;
//         if (maxsize == str.length() - 1) {
//             n = str.size();
//         } else {
//             n = q - p + 1; // Length of the repeating sequence
//         }

//         int newpos = (n % 2 == 0) ? n / 2 : n / 2 + 1;

//         // Calculate new character to insert
//         int b = maxrepeatchar - 'a';
//         char newchar = char(b + 1 + 'a'); // Convert back to char

//         // Insert the new character into the string
//         str.insert(str.begin() + newpos, newchar);

//         cout << str << endl;
//     }
    
//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the typing time of a given password
int typing_time(const string& s) {
    if (s.empty()) return 0;
    
    int time = 2; // Time for the first character
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1; // Same as previous character
        } else {
            time += 2; // Different from previous character
        }
    }
    return time;
}

// Function to find the best password by inserting one character
string maximize_typing_time(const string& s) {
    int max_time = 0;
    string best_password = s;

    // Try inserting each letter from 'a' to 'z'
    for (char c = 'a'; c <= 'z'; ++c) {
        // Try inserting at every position
        for (size_t i = 0; i <= s.size(); ++i) {
            string new_password = s.substr(0, i) + c + s.substr(i);
            int current_time = typing_time(new_password);
            if (current_time > max_time) {
                max_time = current_time;
                best_password = new_password;
            }
        }
    }

    return best_password;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    cin.ignore(); // Ignore the newline after the number input

    while (t--) {
        string s;
        getline(cin, s); // Read the password string
        string result = maximize_typing_time(s);
        cout << result << endl; // Output the best password
    }

    return 0;
}
