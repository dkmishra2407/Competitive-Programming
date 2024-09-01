#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int c = 0, qaq = 0;

    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; i < n-1; j++)
        {
            for(int k=j+1;k<n;k++){
                if(s[i] == 'Q' && s[j]== 'A' && s[k]=='Q'){
                    c++;
                }
            }
        }
        
    }

    cout << c << endl;
    return 0;
}