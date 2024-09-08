#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    bool all_uppercase = true;
    bool first_lower_rest_upper = islower(str[0]);
 
    for (int i = 1; i < str.length(); i++) {
        if (islower(str[i])) {
            all_uppercase = false;
            first_lower_rest_upper = false;
            break;
        }
    }

    int count = 0;

    for(int i=0;i<str.length(); i++){
        if(isupper(str[i])){
            count++;
        }
    }
    // Check if either condition holds: all uppercase or first letter lowercase and rest uppercase
    if (all_uppercase || first_lower_rest_upper) {
        for (int i = 0; i < str.length(); i++) {
            if (i == 0)
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
        }
    }

    if(count == str.length()){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    
    cout << str << endl;
    return 0;
}